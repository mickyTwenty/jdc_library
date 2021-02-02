
'use strict';

let spectest = {
  print: console.log.bind(console),
  print_i32: console.log.bind(console),
  print_i32_f32: console.log.bind(console),
  print_f64_f64: console.log.bind(console),
  print_f32: console.log.bind(console),
  print_f64: console.log.bind(console),
  global_i32: 666,
  global_f32: 666,
  global_f64: 666,
  table: new WebAssembly.Table({initial: 10, maximum: 20, element: 'anyfunc'}),
  memory: new WebAssembly.Memory({initial: 1, maximum: 2})
};
let handler = {
  get(target, prop) {
    return (prop in target) ?  target[prop] : {};
  }
};
let registry = new Proxy({spectest}, handler);

function register(name, instance) {
  registry[name] = instance.exports;
}

function module(bytes, valid = true) {
  let buffer = new ArrayBuffer(bytes.length);
  let view = new Uint8Array(buffer);
  for (let i = 0; i < bytes.length; ++i) {
    view[i] = bytes.charCodeAt(i);
  }
  let validated;
  try {
    validated = WebAssembly.validate(buffer);
  } catch (e) {
    throw new Error("Wasm validate throws");
  }
  if (validated !== valid) {
    throw new Error("Wasm validate failure" + (valid ? "" : " expected"));
  }
  return new WebAssembly.Module(buffer);
}

function instance(bytes, imports = registry) {
  return new WebAssembly.Instance(module(bytes), imports);
}

function call(instance, name, args) {
  return instance.exports[name](...args);
}

function get(instance, name) {
  let v = instance.exports[name];
  return (v instanceof WebAssembly.Global) ? v.value : v;
}

function exports(name, instance) {
  return {[name]: instance.exports};
}

function run(action) {
  action();
}

function assert_malformed(bytes) {
  try { module(bytes, false) } catch (e) {
    if (e instanceof WebAssembly.CompileError) return;
  }
  throw new Error("Wasm decoding failure expected");
}

function assert_invalid(bytes) {
  try { module(bytes, false) } catch (e) {
    if (e instanceof WebAssembly.CompileError) return;
  }
  throw new Error("Wasm validation failure expected");
}

function assert_unlinkable(bytes) {
  let mod = module(bytes);
  try { new WebAssembly.Instance(mod, registry) } catch (e) {
    if (e instanceof WebAssembly.LinkError) return;
  }
  throw new Error("Wasm linking failure expected");
}

function assert_uninstantiable(bytes) {
  let mod = module(bytes);
  try { new WebAssembly.Instance(mod, registry) } catch (e) {
    if (e instanceof WebAssembly.RuntimeError) return;
  }
  throw new Error("Wasm trap expected");
}

function assert_trap(action) {
  try { action() } catch (e) {
    if (e instanceof WebAssembly.RuntimeError) return;
  }
  throw new Error("Wasm trap expected");
}

let StackOverflow;
try { (function f() { 1 + f() })() } catch (e) { StackOverflow = e.constructor }

function assert_exhaustion(action) {
  try { action() } catch (e) {
    if (e instanceof StackOverflow) return;
  }
  throw new Error("Wasm resource exhaustion expected");
}

function assert_return(action, ...expected) {
  let actual = action();
  if (actual === undefined) {
    actual = [];
  } else if (!Array.isArray(actual)) {
    actual = [actual];
  }
  if (actual.length !== expected.length) {
    throw new Error(expected.length + " value(s) expected, got " + actual.length);
  }
  for (let i = 0; i < actual.length; ++i) {
    switch (expected[i]) {
      case "nan:canonical":
      case "nan:arithmetic":
      case "nan:any":
        // Note that JS can't reliably distinguish different NaN values,
        // so there's no good way to test that it's a canonical NaN.
        if (!Number.isNaN(actual[i])) {
          throw new Error("Wasm return value NaN expected, got " + actual[i]);
        };
        return;
      default:
        if (!Object.is(actual[i], expected[i])) {
          throw new Error("Wasm return value " + expected[i] + " expected, got " + actual[i]);
        };
    }
  }
}

// local_tee.wast:3
let $1 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\xd8\x80\x80\x80\x00\x10\x60\x03\x7f\x7f\x7f\x01\x7f\x60\x00\x01\x7f\x60\x00\x01\x7e\x60\x00\x01\x7d\x60\x00\x01\x7c\x60\x01\x7f\x01\x7f\x60\x01\x7e\x01\x7e\x60\x01\x7d\x01\x7d\x60\x01\x7c\x01\x7c\x60\x05\x7e\x7d\x7c\x7f\x7f\x00\x60\x05\x7e\x7d\x7c\x7f\x7f\x01\x7e\x60\x05\x7e\x7d\x7c\x7f\x7f\x01\x7c\x60\x00\x00\x60\x01\x7f\x00\x60\x02\x7f\x7f\x01\x7f\x60\x01\x7e\x01\x7f\x03\xba\x80\x80\x80\x00\x39\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x05\x05\x05\x05\x05\x05\x05\x0d\x05\x05\x0d\x05\x05\x05\x05\x05\x05\x0e\x0e\x05\x00\x05\x05\x05\x05\x05\x05\x05\x0c\x05\x0c\x05\x05\x0d\x0d\x0d\x0d\x07\x05\x05\x05\x05\x05\x0f\x05\x04\x85\x80\x80\x80\x00\x01\x70\x01\x01\x01\x05\x83\x80\x80\x80\x00\x01\x00\x01\x06\x86\x80\x80\x80\x00\x01\x7f\x01\x41\x00\x0b\x07\xcf\x87\x80\x80\x00\x37\x0e\x74\x79\x70\x65\x2d\x6c\x6f\x63\x61\x6c\x2d\x69\x33\x32\x00\x00\x0e\x74\x79\x70\x65\x2d\x6c\x6f\x63\x61\x6c\x2d\x69\x36\x34\x00\x01\x0e\x74\x79\x70\x65\x2d\x6c\x6f\x63\x61\x6c\x2d\x66\x33\x32\x00\x02\x0e\x74\x79\x70\x65\x2d\x6c\x6f\x63\x61\x6c\x2d\x66\x36\x34\x00\x03\x0e\x74\x79\x70\x65\x2d\x70\x61\x72\x61\x6d\x2d\x69\x33\x32\x00\x04\x0e\x74\x79\x70\x65\x2d\x70\x61\x72\x61\x6d\x2d\x69\x36\x34\x00\x05\x0e\x74\x79\x70\x65\x2d\x70\x61\x72\x61\x6d\x2d\x66\x33\x32\x00\x06\x0e\x74\x79\x70\x65\x2d\x70\x61\x72\x61\x6d\x2d\x66\x36\x34\x00\x07\x0a\x74\x79\x70\x65\x2d\x6d\x69\x78\x65\x64\x00\x08\x05\x77\x72\x69\x74\x65\x00\x09\x06\x72\x65\x73\x75\x6c\x74\x00\x0a\x0e\x61\x73\x2d\x62\x6c\x6f\x63\x6b\x2d\x66\x69\x72\x73\x74\x00\x0c\x0c\x61\x73\x2d\x62\x6c\x6f\x63\x6b\x2d\x6d\x69\x64\x00\x0d\x0d\x61\x73\x2d\x62\x6c\x6f\x63\x6b\x2d\x6c\x61\x73\x74\x00\x0e\x0d\x61\x73\x2d\x6c\x6f\x6f\x70\x2d\x66\x69\x72\x73\x74\x00\x0f\x0b\x61\x73\x2d\x6c\x6f\x6f\x70\x2d\x6d\x69\x64\x00\x10\x0c\x61\x73\x2d\x6c\x6f\x6f\x70\x2d\x6c\x61\x73\x74\x00\x11\x0b\x61\x73\x2d\x62\x72\x2d\x76\x61\x6c\x75\x65\x00\x12\x0d\x61\x73\x2d\x62\x72\x5f\x69\x66\x2d\x63\x6f\x6e\x64\x00\x13\x0e\x61\x73\x2d\x62\x72\x5f\x69\x66\x2d\x76\x61\x6c\x75\x65\x00\x14\x13\x61\x73\x2d\x62\x72\x5f\x69\x66\x2d\x76\x61\x6c\x75\x65\x2d\x63\x6f\x6e\x64\x00\x15\x11\x61\x73\x2d\x62\x72\x5f\x74\x61\x62\x6c\x65\x2d\x69\x6e\x64\x65\x78\x00\x16\x11\x61\x73\x2d\x62\x72\x5f\x74\x61\x62\x6c\x65\x2d\x76\x61\x6c\x75\x65\x00\x17\x17\x61\x73\x2d\x62\x72\x5f\x74\x61\x62\x6c\x65\x2d\x76\x61\x6c\x75\x65\x2d\x69\x6e\x64\x65\x78\x00\x18\x0f\x61\x73\x2d\x72\x65\x74\x75\x72\x6e\x2d\x76\x61\x6c\x75\x65\x00\x19\x0a\x61\x73\x2d\x69\x66\x2d\x63\x6f\x6e\x64\x00\x1a\x0a\x61\x73\x2d\x69\x66\x2d\x74\x68\x65\x6e\x00\x1b\x0a\x61\x73\x2d\x69\x66\x2d\x65\x6c\x73\x65\x00\x1c\x0f\x61\x73\x2d\x73\x65\x6c\x65\x63\x74\x2d\x66\x69\x72\x73\x74\x00\x1d\x10\x61\x73\x2d\x73\x65\x6c\x65\x63\x74\x2d\x73\x65\x63\x6f\x6e\x64\x00\x1e\x0e\x61\x73\x2d\x73\x65\x6c\x65\x63\x74\x2d\x63\x6f\x6e\x64\x00\x1f\x0d\x61\x73\x2d\x63\x61\x6c\x6c\x2d\x66\x69\x72\x73\x74\x00\x21\x0b\x61\x73\x2d\x63\x61\x6c\x6c\x2d\x6d\x69\x64\x00\x22\x0c\x61\x73\x2d\x63\x61\x6c\x6c\x2d\x6c\x61\x73\x74\x00\x23\x16\x61\x73\x2d\x63\x61\x6c\x6c\x5f\x69\x6e\x64\x69\x72\x65\x63\x74\x2d\x66\x69\x72\x73\x74\x00\x24\x14\x61\x73\x2d\x63\x61\x6c\x6c\x5f\x69\x6e\x64\x69\x72\x65\x63\x74\x2d\x6d\x69\x64\x00\x25\x15\x61\x73\x2d\x63\x61\x6c\x6c\x5f\x69\x6e\x64\x69\x72\x65\x63\x74\x2d\x6c\x61\x73\x74\x00\x26\x16\x61\x73\x2d\x63\x61\x6c\x6c\x5f\x69\x6e\x64\x69\x72\x65\x63\x74\x2d\x69\x6e\x64\x65\x78\x00\x27\x12\x61\x73\x2d\x6c\x6f\x63\x61\x6c\x2e\x73\x65\x74\x2d\x76\x61\x6c\x75\x65\x00\x28\x12\x61\x73\x2d\x6c\x6f\x63\x61\x6c\x2e\x74\x65\x65\x2d\x76\x61\x6c\x75\x65\x00\x29\x13\x61\x73\x2d\x67\x6c\x6f\x62\x61\x6c\x2e\x73\x65\x74\x2d\x76\x61\x6c\x75\x65\x00\x2a\x0f\x61\x73\x2d\x6c\x6f\x61\x64\x2d\x61\x64\x64\x72\x65\x73\x73\x00\x2b\x10\x61\x73\x2d\x6c\x6f\x61\x64\x4e\x2d\x61\x64\x64\x72\x65\x73\x73\x00\x2c\x10\x61\x73\x2d\x73\x74\x6f\x72\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x00\x2d\x0e\x61\x73\x2d\x73\x74\x6f\x72\x65\x2d\x76\x61\x6c\x75\x65\x00\x2e\x11\x61\x73\x2d\x73\x74\x6f\x72\x65\x4e\x2d\x61\x64\x64\x72\x65\x73\x73\x00\x2f\x0f\x61\x73\x2d\x73\x74\x6f\x72\x65\x4e\x2d\x76\x61\x6c\x75\x65\x00\x30\x10\x61\x73\x2d\x75\x6e\x61\x72\x79\x2d\x6f\x70\x65\x72\x61\x6e\x64\x00\x31\x0e\x61\x73\x2d\x62\x69\x6e\x61\x72\x79\x2d\x6c\x65\x66\x74\x00\x32\x0f\x61\x73\x2d\x62\x69\x6e\x61\x72\x79\x2d\x72\x69\x67\x68\x74\x00\x33\x0f\x61\x73\x2d\x74\x65\x73\x74\x2d\x6f\x70\x65\x72\x61\x6e\x64\x00\x34\x0f\x61\x73\x2d\x63\x6f\x6d\x70\x61\x72\x65\x2d\x6c\x65\x66\x74\x00\x35\x10\x61\x73\x2d\x63\x6f\x6d\x70\x61\x72\x65\x2d\x72\x69\x67\x68\x74\x00\x36\x12\x61\x73\x2d\x63\x6f\x6e\x76\x65\x72\x74\x2d\x6f\x70\x65\x72\x61\x6e\x64\x00\x37\x13\x61\x73\x2d\x6d\x65\x6d\x6f\x72\x79\x2e\x67\x72\x6f\x77\x2d\x73\x69\x7a\x65\x00\x38\x09\x87\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x01\x20\x0a\xe7\x88\x80\x80\x00\x39\x88\x80\x80\x80\x00\x01\x01\x7f\x41\x00\x22\x00\x0b\x88\x80\x80\x80\x00\x01\x01\x7e\x42\x00\x22\x00\x0b\x8b\x80\x80\x80\x00\x01\x01\x7d\x43\x00\x00\x00\x00\x22\x00\x0b\x8f\x80\x80\x80\x00\x01\x01\x7c\x44\x00\x00\x00\x00\x00\x00\x00\x00\x22\x00\x0b\x86\x80\x80\x80\x00\x00\x41\x0a\x22\x00\x0b\x86\x80\x80\x80\x00\x00\x42\x0b\x22\x00\x0b\x89\x80\x80\x80\x00\x00\x43\x9a\x99\x31\x41\x22\x00\x0b\x8d\x80\x80\x80\x00\x00\x44\x66\x66\x66\x66\x66\x66\x28\x40\x22\x00\x0b\xd2\x80\x80\x80\x00\x03\x01\x7d\x02\x7e\x01\x7c\x42\x00\x22\x00\x50\x1a\x43\x00\x00\x00\x00\x22\x01\x8c\x1a\x44\x00\x00\x00\x00\x00\x00\x00\x00\x22\x02\x9a\x1a\x41\x00\x22\x03\x45\x1a\x41\x00\x22\x04\x45\x1a\x43\x00\x00\x00\x00\x22\x05\x8c\x1a\x42\x00\x22\x06\x50\x1a\x42\x00\x22\x07\x50\x1a\x44\x00\x00\x00\x00\x00\x00\x00\x00\x22\x08\x9a\x1a\x0b\xd5\x80\x80\x80\x00\x03\x01\x7d\x02\x7e\x01\x7c\x43\x9a\x99\x99\xbe\x22\x01\x1a\x41\x28\x22\x03\x1a\x41\x79\x22\x04\x1a\x43\x00\x00\xb0\x40\x22\x05\x1a\x42\x06\x22\x06\x1a\x44\x00\x00\x00\x00\x00\x00\x20\x40\x22\x08\x1a\x20\x00\xba\x20\x01\xbb\x20\x02\x20\x03\xb8\x20\x04\xb7\x20\x05\xbb\x20\x06\xba\x20\x07\xba\x20\x08\xa0\xa0\xa0\xa0\xa0\xa0\xa0\xa0\xb0\x0b\xcf\x80\x80\x80\x00\x03\x01\x7d\x02\x7e\x01\x7c\x42\x01\x22\x00\xba\x43\x00\x00\x00\x40\x22\x01\xbb\x44\x66\x66\x66\x66\x66\x66\x0a\x40\x22\x02\x41\x04\x22\x03\xb8\x41\x05\x22\x04\xb7\x43\x00\x00\xb0\x40\x22\x05\xbb\x42\x06\x22\x06\xba\x42\x00\x22\x07\xba\x44\x00\x00\x00\x00\x00\x00\x20\x40\x22\x08\xa0\xa0\xa0\xa0\xa0\xa0\xa0\xa0\x0b\x82\x80\x80\x80\x00\x00\x0b\x8b\x80\x80\x80\x00\x00\x02\x7f\x41\x01\x22\x00\x10\x0b\x0b\x0b\x8d\x80\x80\x80\x00\x00\x02\x7f\x10\x0b\x41\x01\x22\x00\x10\x0b\x0b\x0b\x8d\x80\x80\x80\x00\x00\x02\x7f\x10\x0b\x10\x0b\x41\x01\x22\x00\x0b\x0b\x8b\x80\x80\x80\x00\x00\x03\x7f\x41\x03\x22\x00\x10\x0b\x0b\x0b\x8d\x80\x80\x80\x00\x00\x03\x7f\x10\x0b\x41\x04\x22\x00\x10\x0b\x0b\x0b\x8d\x80\x80\x80\x00\x00\x03\x7f\x10\x0b\x10\x0b\x41\x05\x22\x00\x0b\x0b\x8b\x80\x80\x80\x00\x00\x02\x7f\x41\x09\x22\x00\x0c\x00\x0b\x0b\x8b\x80\x80\x80\x00\x00\x02\x40\x41\x01\x22\x00\x0d\x00\x0b\x0b\x90\x80\x80\x80\x00\x00\x02\x7f\x41\x08\x22\x00\x41\x01\x0d\x00\x1a\x41\x07\x0b\x0b\x90\x80\x80\x80\x00\x00\x02\x7f\x41\x06\x41\x09\x22\x00\x0d\x00\x1a\x41\x07\x0b\x0b\x8e\x80\x80\x80\x00\x00\x02\x40\x41\x00\x22\x00\x0e\x02\x00\x00\x00\x0b\x0b\x92\x80\x80\x80\x00\x00\x02\x7f\x41\x0a\x22\x00\x41\x01\x0e\x02\x00\x00\x00\x41\x07\x0b\x0b\x91\x80\x80\x80\x00\x00\x02\x7f\x41\x06\x41\x0b\x22\x00\x0e\x01\x00\x00\x41\x07\x0b\x0b\x87\x80\x80\x80\x00\x00\x41\x07\x22\x00\x0f\x0b\x8e\x80\x80\x80\x00\x00\x41\x02\x22\x00\x04\x7f\x41\x00\x05\x41\x01\x0b\x0b\x8e\x80\x80\x80\x00\x00\x20\x00\x04\x7f\x41\x03\x22\x00\x05\x20\x00\x0b\x0b\x8e\x80\x80\x80\x00\x00\x20\x00\x04\x7f\x20\x00\x05\x41\x04\x22\x00\x0b\x0b\x8b\x80\x80\x80\x00\x00\x41\x05\x22\x00\x20\x00\x20\x01\x1b\x0b\x8b\x80\x80\x80\x00\x00\x20\x00\x41\x06\x22\x00\x20\x01\x1b\x0b\x8b\x80\x80\x80\x00\x00\x41\x00\x41\x01\x41\x07\x22\x00\x1b\x0b\x84\x80\x80\x80\x00\x00\x41\x7f\x0b\x8c\x80\x80\x80\x00\x00\x41\x0c\x22\x00\x41\x02\x41\x03\x10\x20\x0b\x8c\x80\x80\x80\x00\x00\x41\x01\x41\x0d\x22\x00\x41\x03\x10\x20\x0b\x8c\x80\x80\x80\x00\x00\x41\x01\x41\x02\x41\x0e\x22\x00\x10\x20\x0b\x8f\x80\x80\x80\x00\x00\x41\x01\x22\x00\x41\x02\x41\x03\x41\x00\x11\x00\x00\x0b\x8f\x80\x80\x80\x00\x00\x41\x01\x41\x02\x22\x00\x41\x03\x41\x00\x11\x00\x00\x0b\x8f\x80\x80\x80\x00\x00\x41\x01\x41\x02\x41\x03\x22\x00\x41\x00\x11\x00\x00\x0b\x8f\x80\x80\x80\x00\x00\x41\x01\x41\x02\x41\x03\x41\x00\x22\x00\x11\x00\x00\x0b\x8a\x80\x80\x80\x00\x01\x01\x7f\x41\x01\x22\x00\x21\x00\x0b\x88\x80\x80\x80\x00\x00\x41\x01\x22\x00\x22\x00\x0b\x8a\x80\x80\x80\x00\x01\x01\x7f\x41\x01\x22\x00\x24\x00\x0b\x89\x80\x80\x80\x00\x00\x41\x01\x22\x00\x28\x02\x00\x0b\x89\x80\x80\x80\x00\x00\x41\x03\x22\x00\x2c\x00\x00\x0b\x8b\x80\x80\x80\x00\x00\x41\x1e\x22\x00\x41\x07\x36\x02\x00\x0b\x8b\x80\x80\x80\x00\x00\x41\x02\x41\x01\x22\x00\x36\x02\x00\x0b\x8b\x80\x80\x80\x00\x00\x41\x01\x22\x00\x41\x07\x3a\x00\x00\x0b\x8b\x80\x80\x80\x00\x00\x41\x02\x41\x01\x22\x00\x3b\x01\x00\x0b\x8a\x80\x80\x80\x00\x00\x43\xe2\xf1\x80\x7f\x22\x00\x8c\x0b\x89\x80\x80\x80\x00\x00\x41\x03\x22\x00\x41\x0a\x6a\x0b\x89\x80\x80\x80\x00\x00\x41\x0a\x41\x04\x22\x00\x6b\x0b\x87\x80\x80\x80\x00\x00\x41\x00\x22\x00\x45\x0b\x89\x80\x80\x80\x00\x00\x41\x2b\x22\x00\x41\x0a\x4c\x0b\x89\x80\x80\x80\x00\x00\x41\x0a\x41\x2a\x22\x00\x47\x0b\x87\x80\x80\x80\x00\x00\x42\x29\x22\x00\xa7\x0b\x88\x80\x80\x80\x00\x00\x41\x28\x22\x00\x40\x00\x0b");

// local_tee.wast:280
assert_return(() => call($1, "type-local-i32", []), 0);

// local_tee.wast:281
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x88\x80\x80\x80\x00\x02\x60\x00\x00\x60\x00\x01\x7e\x02\x95\x80\x80\x80\x00\x01\x02\x24\x31\x0e\x74\x79\x70\x65\x2d\x6c\x6f\x63\x61\x6c\x2d\x69\x36\x34\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\x97\x80\x80\x80\x00\x01\x91\x80\x80\x80\x00\x00\x02\x40\x10\x00\x01\x42\x00\x01\x51\x45\x0d\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "type-local-i64", []), int64("0"))

// local_tee.wast:282
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x88\x80\x80\x80\x00\x02\x60\x00\x00\x60\x00\x01\x7d\x02\x95\x80\x80\x80\x00\x01\x02\x24\x31\x0e\x74\x79\x70\x65\x2d\x6c\x6f\x63\x61\x6c\x2d\x66\x33\x32\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\x9a\x80\x80\x80\x00\x01\x94\x80\x80\x80\x00\x00\x02\x40\x10\x00\xbc\x43\x00\x00\x00\x00\xbc\x46\x45\x0d\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "type-local-f32", []), 0.)

// local_tee.wast:283
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x88\x80\x80\x80\x00\x02\x60\x00\x00\x60\x00\x01\x7c\x02\x95\x80\x80\x80\x00\x01\x02\x24\x31\x0e\x74\x79\x70\x65\x2d\x6c\x6f\x63\x61\x6c\x2d\x66\x36\x34\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\x9e\x80\x80\x80\x00\x01\x98\x80\x80\x80\x00\x00\x02\x40\x10\x00\xbd\x44\x00\x00\x00\x00\x00\x00\x00\x00\xbd\x51\x45\x0d\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "type-local-f64", []), 0.)

// local_tee.wast:285
assert_return(() => call($1, "type-param-i32", [2]), 10);

// local_tee.wast:286
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x89\x80\x80\x80\x00\x02\x60\x00\x00\x60\x01\x7e\x01\x7e\x02\x95\x80\x80\x80\x00\x01\x02\x24\x31\x0e\x74\x79\x70\x65\x2d\x70\x61\x72\x61\x6d\x2d\x69\x36\x34\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\x99\x80\x80\x80\x00\x01\x93\x80\x80\x80\x00\x00\x02\x40\x42\x03\x10\x00\x01\x42\x0b\x01\x51\x45\x0d\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "type-param-i64", [int64("3")]), int64("11"))

// local_tee.wast:287
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x89\x80\x80\x80\x00\x02\x60\x00\x00\x60\x01\x7d\x01\x7d\x02\x95\x80\x80\x80\x00\x01\x02\x24\x31\x0e\x74\x79\x70\x65\x2d\x70\x61\x72\x61\x6d\x2d\x66\x33\x32\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\x9f\x80\x80\x80\x00\x01\x99\x80\x80\x80\x00\x00\x02\x40\x43\xcd\xcc\x8c\x40\x10\x00\xbc\x43\x9a\x99\x31\x41\xbc\x46\x45\x0d\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "type-param-f32", [4.40000009537]), 11.1000003815)

// local_tee.wast:288
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x89\x80\x80\x80\x00\x02\x60\x00\x00\x60\x01\x7c\x01\x7c\x02\x95\x80\x80\x80\x00\x01\x02\x24\x31\x0e\x74\x79\x70\x65\x2d\x70\x61\x72\x61\x6d\x2d\x66\x36\x34\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\xa7\x80\x80\x80\x00\x01\xa1\x80\x80\x80\x00\x00\x02\x40\x44\x00\x00\x00\x00\x00\x00\x16\x40\x10\x00\xbd\x44\x66\x66\x66\x66\x66\x66\x28\x40\xbd\x51\x45\x0d\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "type-param-f64", [5.5]), 12.2)

// local_tee.wast:290
assert_return(() => call($1, "as-block-first", [0]), 1);

// local_tee.wast:291
assert_return(() => call($1, "as-block-mid", [0]), 1);

// local_tee.wast:292
assert_return(() => call($1, "as-block-last", [0]), 1);

// local_tee.wast:294
assert_return(() => call($1, "as-loop-first", [0]), 3);

// local_tee.wast:295
assert_return(() => call($1, "as-loop-mid", [0]), 4);

// local_tee.wast:296
assert_return(() => call($1, "as-loop-last", [0]), 5);

// local_tee.wast:298
assert_return(() => call($1, "as-br-value", [0]), 9);

// local_tee.wast:300
assert_return(() => call($1, "as-br_if-cond", [0]));

// local_tee.wast:301
assert_return(() => call($1, "as-br_if-value", [0]), 8);

// local_tee.wast:302
assert_return(() => call($1, "as-br_if-value-cond", [0]), 6);

// local_tee.wast:304
assert_return(() => call($1, "as-br_table-index", [0]));

// local_tee.wast:305
assert_return(() => call($1, "as-br_table-value", [0]), 10);

// local_tee.wast:306
assert_return(() => call($1, "as-br_table-value-index", [0]), 6);

// local_tee.wast:308
assert_return(() => call($1, "as-return-value", [0]), 7);

// local_tee.wast:310
assert_return(() => call($1, "as-if-cond", [0]), 0);

// local_tee.wast:311
assert_return(() => call($1, "as-if-then", [1]), 3);

// local_tee.wast:312
assert_return(() => call($1, "as-if-else", [0]), 4);

// local_tee.wast:314
assert_return(() => call($1, "as-select-first", [0, 1]), 5);

// local_tee.wast:315
assert_return(() => call($1, "as-select-second", [0, 0]), 6);

// local_tee.wast:316
assert_return(() => call($1, "as-select-cond", [0]), 0);

// local_tee.wast:318
assert_return(() => call($1, "as-call-first", [0]), -1);

// local_tee.wast:319
assert_return(() => call($1, "as-call-mid", [0]), -1);

// local_tee.wast:320
assert_return(() => call($1, "as-call-last", [0]), -1);

// local_tee.wast:322
assert_return(() => call($1, "as-call_indirect-first", [0]), -1);

// local_tee.wast:323
assert_return(() => call($1, "as-call_indirect-mid", [0]), -1);

// local_tee.wast:324
assert_return(() => call($1, "as-call_indirect-last", [0]), -1);

// local_tee.wast:325
assert_return(() => call($1, "as-call_indirect-index", [0]), -1);

// local_tee.wast:327
assert_return(() => call($1, "as-local.set-value", []));

// local_tee.wast:328
assert_return(() => call($1, "as-local.tee-value", [0]), 1);

// local_tee.wast:329
assert_return(() => call($1, "as-global.set-value", []));

// local_tee.wast:331
assert_return(() => call($1, "as-load-address", [0]), 0);

// local_tee.wast:332
assert_return(() => call($1, "as-loadN-address", [0]), 0);

// local_tee.wast:333
assert_return(() => call($1, "as-store-address", [0]));

// local_tee.wast:334
assert_return(() => call($1, "as-store-value", [0]));

// local_tee.wast:335
assert_return(() => call($1, "as-storeN-address", [0]));

// local_tee.wast:336
assert_return(() => call($1, "as-storeN-value", [0]));

// local_tee.wast:338
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x89\x80\x80\x80\x00\x02\x60\x00\x00\x60\x01\x7d\x01\x7d\x02\x97\x80\x80\x80\x00\x01\x02\x24\x31\x10\x61\x73\x2d\x75\x6e\x61\x72\x79\x2d\x6f\x70\x65\x72\x61\x6e\x64\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\x9f\x80\x80\x80\x00\x01\x99\x80\x80\x80\x00\x00\x02\x40\x43\x00\x00\x00\x00\x10\x00\xbc\x43\xe2\xf1\x80\xff\xbc\x46\x45\x0d\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "as-unary-operand", [0.]), -NaN)

// local_tee.wast:339
assert_return(() => call($1, "as-binary-left", [0]), 13);

// local_tee.wast:340
assert_return(() => call($1, "as-binary-right", [0]), 6);

// local_tee.wast:341
assert_return(() => call($1, "as-test-operand", [0]), 1);

// local_tee.wast:342
assert_return(() => call($1, "as-compare-left", [0]), 0);

// local_tee.wast:343
assert_return(() => call($1, "as-compare-right", [0]), 1);

// local_tee.wast:344
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x89\x80\x80\x80\x00\x02\x60\x00\x00\x60\x01\x7e\x01\x7f\x02\x99\x80\x80\x80\x00\x01\x02\x24\x31\x12\x61\x73\x2d\x63\x6f\x6e\x76\x65\x72\x74\x2d\x6f\x70\x65\x72\x61\x6e\x64\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\x99\x80\x80\x80\x00\x01\x93\x80\x80\x80\x00\x00\x02\x40\x42\x00\x10\x00\x01\x41\x29\x01\x46\x45\x0d\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "as-convert-operand", [int64("0")]), 41)

// local_tee.wast:345
assert_return(() => call($1, "as-memory.grow-size", [0]), 1);

// local_tee.wast:347
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x8c\x80\x80\x80\x00\x02\x60\x00\x00\x60\x05\x7e\x7d\x7c\x7f\x7f\x00\x02\x91\x80\x80\x80\x00\x01\x02\x24\x31\x0a\x74\x79\x70\x65\x2d\x6d\x69\x78\x65\x64\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\xa3\x80\x80\x80\x00\x01\x9d\x80\x80\x80\x00\x00\x02\x40\x42\x01\x43\xcd\xcc\x0c\x40\x44\x66\x66\x66\x66\x66\x66\x0a\x40\x41\x04\x41\x05\x10\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "type-mixed", [int64("1"), 2.20000004768, 3.3, 4, 5]))

// local_tee.wast:353
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x8d\x80\x80\x80\x00\x02\x60\x00\x00\x60\x05\x7e\x7d\x7c\x7f\x7f\x01\x7e\x02\x8c\x80\x80\x80\x00\x01\x02\x24\x31\x05\x77\x72\x69\x74\x65\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\xab\x80\x80\x80\x00\x01\xa5\x80\x80\x80\x00\x00\x02\x40\x42\x01\x43\x00\x00\x00\x40\x44\x66\x66\x66\x66\x66\x66\x0a\x40\x41\x04\x41\x05\x10\x00\x01\x42\x38\x01\x51\x45\x0d\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "write", [int64("1"), 2., 3.3, 4, 5]), int64("56"))

// local_tee.wast:360
run(() => call(instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x8d\x80\x80\x80\x00\x02\x60\x00\x00\x60\x05\x7e\x7d\x7c\x7f\x7f\x01\x7c\x02\x8d\x80\x80\x80\x00\x01\x02\x24\x31\x06\x72\x65\x73\x75\x6c\x74\x00\x01\x03\x82\x80\x80\x80\x00\x01\x00\x07\x87\x80\x80\x80\x00\x01\x03\x72\x75\x6e\x00\x01\x0a\xb2\x80\x80\x80\x00\x01\xac\x80\x80\x80\x00\x00\x02\x40\x42\x7f\x43\x00\x00\x00\xc0\x44\x66\x66\x66\x66\x66\x66\x0a\xc0\x41\x7c\x41\x7b\x10\x00\xbd\x44\x66\x66\x66\x66\x66\x66\x41\x40\xbd\x51\x45\x0d\x00\x0f\x0b\x00\x0b", exports("$1", $1)),  "run", []));  // assert_return(() => call($1, "result", [int64("-1"), -2., -3.3, -4, -5]), 34.8)

// local_tee.wast:370
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x00\x01\x7e\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8e\x80\x80\x80\x00\x01\x88\x80\x80\x80\x00\x01\x01\x7f\x41\x00\x22\x00\x0b");

// local_tee.wast:374
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x92\x80\x80\x80\x00\x01\x8c\x80\x80\x80\x00\x01\x01\x7d\x43\x00\x00\x00\x00\x22\x00\x45\x0b");

// local_tee.wast:378
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x91\x80\x80\x80\x00\x01\x8b\x80\x80\x80\x00\x02\x01\x7c\x01\x7e\x42\x00\x22\x01\x9a\x0b");

// local_tee.wast:383
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8d\x80\x80\x80\x00\x01\x87\x80\x80\x80\x00\x01\x01\x7f\x01\x22\x00\x0b");

// local_tee.wast:387
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x91\x80\x80\x80\x00\x01\x8b\x80\x80\x80\x00\x01\x01\x7f\x43\x00\x00\x00\x00\x22\x00\x0b");

// local_tee.wast:391
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x95\x80\x80\x80\x00\x01\x8f\x80\x80\x80\x00\x01\x01\x7d\x44\x00\x00\x00\x00\x00\x00\x00\x00\x22\x00\x0b");

// local_tee.wast:395
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x97\x80\x80\x80\x00\x01\x91\x80\x80\x80\x00\x02\x01\x7c\x01\x7e\x44\x00\x00\x00\x00\x00\x00\x00\x00\x22\x01\x0b");

// local_tee.wast:403
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x86\x80\x80\x80\x00\x01\x60\x01\x7f\x01\x7e\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8a\x80\x80\x80\x00\x01\x84\x80\x80\x80\x00\x00\x20\x00\x0b");

// local_tee.wast:407
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7d\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8b\x80\x80\x80\x00\x01\x85\x80\x80\x80\x00\x00\x20\x00\x45\x0b");

// local_tee.wast:411
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x86\x80\x80\x80\x00\x01\x60\x02\x7c\x7e\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8b\x80\x80\x80\x00\x01\x85\x80\x80\x80\x00\x00\x20\x01\x9a\x0b");

// local_tee.wast:416
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8b\x80\x80\x80\x00\x01\x85\x80\x80\x80\x00\x00\x01\x22\x00\x0b");

// local_tee.wast:420
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8f\x80\x80\x80\x00\x01\x89\x80\x80\x80\x00\x00\x43\x00\x00\x00\x00\x22\x00\x0b");

// local_tee.wast:424
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7d\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x93\x80\x80\x80\x00\x01\x8d\x80\x80\x80\x00\x00\x44\x00\x00\x00\x00\x00\x00\x00\x00\x22\x00\x0b");

// local_tee.wast:428
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x86\x80\x80\x80\x00\x01\x60\x02\x7c\x7e\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x93\x80\x80\x80\x00\x01\x8d\x80\x80\x80\x00\x00\x44\x00\x00\x00\x00\x00\x00\x00\x00\x22\x01\x0b");

// local_tee.wast:433
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8b\x80\x80\x80\x00\x01\x85\x80\x80\x80\x00\x00\x22\x00\x1a\x0b");

// local_tee.wast:441
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x90\x80\x80\x80\x00\x01\x8a\x80\x80\x80\x00\x00\x41\x00\x02\x40\x22\x00\x1a\x0b\x0b");

// local_tee.wast:450
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x90\x80\x80\x80\x00\x01\x8a\x80\x80\x80\x00\x00\x41\x00\x03\x40\x22\x00\x1a\x0b\x0b");

// local_tee.wast:459
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x92\x80\x80\x80\x00\x01\x8c\x80\x80\x80\x00\x00\x41\x00\x41\x00\x04\x40\x22\x00\x1a\x0b\x0b");

// local_tee.wast:468
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x95\x80\x80\x80\x00\x01\x8f\x80\x80\x80\x00\x00\x41\x00\x41\x00\x04\x7f\x41\x00\x05\x22\x00\x0b\x1a\x0b");

// local_tee.wast:477
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x92\x80\x80\x80\x00\x01\x8c\x80\x80\x80\x00\x00\x41\x00\x02\x40\x22\x00\x0c\x00\x1a\x0b\x0b");

// local_tee.wast:486
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x94\x80\x80\x80\x00\x01\x8e\x80\x80\x80\x00\x00\x41\x00\x02\x40\x22\x00\x41\x01\x0d\x00\x1a\x0b\x0b");

// local_tee.wast:495
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x93\x80\x80\x80\x00\x01\x8d\x80\x80\x80\x00\x00\x41\x00\x02\x40\x22\x00\x0e\x00\x00\x1a\x0b\x0b");

// local_tee.wast:504
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8c\x80\x80\x80\x00\x01\x86\x80\x80\x80\x00\x00\x22\x00\x0f\x1a\x0b");

// local_tee.wast:512
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x90\x80\x80\x80\x00\x01\x8a\x80\x80\x80\x00\x00\x22\x00\x41\x01\x41\x02\x1b\x1a\x0b");

// local_tee.wast:520
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x8a\x80\x80\x80\x00\x02\x60\x01\x7f\x00\x60\x01\x7f\x01\x7f\x03\x83\x80\x80\x80\x00\x02\x00\x01\x0a\x96\x80\x80\x80\x00\x02\x87\x80\x80\x80\x00\x00\x22\x00\x10\x01\x1a\x0b\x84\x80\x80\x80\x00\x00\x20\x00\x0b");

// local_tee.wast:529
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x8a\x80\x80\x80\x00\x02\x60\x01\x7f\x01\x7f\x60\x01\x7f\x00\x03\x83\x80\x80\x80\x00\x02\x00\x01\x04\x85\x80\x80\x80\x00\x01\x70\x01\x01\x01\x09\x87\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x01\x00\x0a\x9c\x80\x80\x80\x00\x02\x84\x80\x80\x80\x00\x00\x20\x00\x0b\x8d\x80\x80\x80\x00\x00\x02\x7f\x22\x00\x41\x00\x11\x00\x00\x1a\x0b\x0b");

// local_tee.wast:545
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8f\x80\x80\x80\x00\x01\x89\x80\x80\x80\x00\x00\x22\x00\x21\x00\x20\x00\x1a\x0b");

// local_tee.wast:553
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8d\x80\x80\x80\x00\x01\x87\x80\x80\x80\x00\x00\x22\x00\x22\x00\x1a\x0b");

// local_tee.wast:561
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x01\x41\x00\x0b\x0a\x8f\x80\x80\x80\x00\x01\x89\x80\x80\x80\x00\x00\x22\x00\x24\x00\x23\x00\x1a\x0b");

// local_tee.wast:570
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x0a\x8d\x80\x80\x80\x00\x01\x87\x80\x80\x80\x00\x00\x22\x00\x40\x00\x1a\x0b");

// local_tee.wast:579
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x0a\x8e\x80\x80\x80\x00\x01\x88\x80\x80\x80\x00\x00\x22\x00\x28\x02\x00\x1a\x0b");

// local_tee.wast:588
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0a\x8f\x80\x80\x80\x00\x01\x89\x80\x80\x80\x00\x00\x22\x00\x41\x01\x36\x02\x00\x0b");

// local_tee.wast:598
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7d\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x91\x80\x80\x80\x00\x01\x8b\x80\x80\x80\x00\x01\x01\x7f\x43\x00\x00\x00\x00\x22\x01\x0b");

// local_tee.wast:602
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x86\x80\x80\x80\x00\x01\x60\x02\x7e\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x91\x80\x80\x80\x00\x01\x8b\x80\x80\x80\x00\x01\x01\x7d\x43\x00\x00\x00\x00\x22\x01\x0b");

// local_tee.wast:606
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7e\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x90\x80\x80\x80\x00\x01\x8a\x80\x80\x80\x00\x02\x01\x7c\x01\x7e\x42\x00\x22\x01\x0b");

// local_tee.wast:614
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x91\x80\x80\x80\x00\x01\x8b\x80\x80\x80\x00\x02\x01\x7f\x01\x7e\x41\x00\x22\x03\x1a\x0b");

// local_tee.wast:618
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x94\x80\x80\x80\x00\x01\x8e\x80\x80\x80\x00\x02\x01\x7f\x01\x7e\x41\x00\x22\xf7\xa4\xea\x06\x1a\x0b");

// local_tee.wast:623
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x86\x80\x80\x80\x00\x01\x60\x02\x7f\x7e\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x8d\x80\x80\x80\x00\x01\x87\x80\x80\x80\x00\x00\x41\x00\x22\x02\x1a\x0b");

// local_tee.wast:627
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x86\x80\x80\x80\x00\x01\x60\x02\x7f\x7e\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x91\x80\x80\x80\x00\x01\x8b\x80\x80\x80\x00\x00\x41\x00\x22\xf7\xf2\xce\xd4\x02\x1a\x0b");

// local_tee.wast:632
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x91\x80\x80\x80\x00\x01\x8b\x80\x80\x80\x00\x02\x01\x7f\x01\x7e\x41\x00\x22\x03\x1a\x0b");

// local_tee.wast:636
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7e\x00\x03\x82\x80\x80\x80\x00\x01\x00\x0a\x94\x80\x80\x80\x00\x01\x8e\x80\x80\x80\x00\x02\x01\x7f\x01\x7e\x41\x00\x22\xf7\xa8\x99\x66\x1a\x0b");
