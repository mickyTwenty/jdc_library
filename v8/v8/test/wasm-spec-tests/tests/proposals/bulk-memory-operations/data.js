
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

// data.wast:5
let $1 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\xa3\x81\x80\x80\x00\x18\x00\x41\x00\x0b\x00\x00\x41\x01\x0b\x04\x61\x62\x63\x64\x00\x41\x00\x0b\x00\x00\x41\x00\x0b\x03\x61\x62\x63\x00\x41\x00\x0b\x00\x00\x41\x01\x0b\x04\x61\x62\x63\x64\x00\x41\x00\x0b\x00\x00\x41\x00\x0b\x03\x61\x62\x63\x00\x41\x00\x0b\x00\x00\x41\x01\x0b\x04\x61\x62\x63\x64\x00\x41\x00\x0b\x00\x00\x41\x00\x0b\x03\x61\x62\x63\x00\x41\x00\x0b\x00\x00\x41\x01\x0b\x04\x61\x62\x63\x64\x00\x41\x00\x0b\x00\x00\x41\x00\x0b\x03\x61\x62\x63\x00\x41\x00\x0b\x00\x00\x41\x01\x0b\x04\x61\x62\x63\x64\x00\x41\x00\x0b\x00\x00\x41\x00\x0b\x03\x61\x62\x63\x00\x41\x00\x0b\x00\x00\x41\x01\x0b\x04\x61\x62\x63\x64\x00\x41\x00\x0b\x00\x00\x41\x00\x0b\x03\x61\x62\x63");

// data.wast:35
let $2 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x01\x61");

// data.wast:39
let $3 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x94\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x01\x61");

// data.wast:44
let $4 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\xa2\x80\x80\x80\x00\x05\x00\x41\x00\x0b\x01\x61\x00\x41\x03\x0b\x01\x62\x00\x41\xe4\x00\x0b\x03\x63\x64\x65\x00\x41\x05\x0b\x01\x78\x00\x41\x03\x0b\x01\x63");

// data.wast:52
let $5 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x94\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x01\x0b\xa7\x80\x80\x80\x00\x06\x00\x41\x00\x0b\x01\x61\x00\x41\x01\x0b\x01\x62\x00\x41\x02\x0b\x03\x63\x64\x65\x00\x41\x03\x0b\x01\x66\x00\x41\x02\x0b\x01\x67\x00\x41\x01\x0b\x01\x68");

// data.wast:62
let $6 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x98\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x0a\x67\x6c\x6f\x62\x61\x6c\x5f\x69\x33\x32\x03\x7f\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x23\x00\x0b\x01\x61");

// data.wast:67
let $7 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\xab\x80\x80\x80\x00\x02\x08\x73\x70\x65\x63\x74\x65\x73\x74\x0a\x67\x6c\x6f\x62\x61\x6c\x5f\x69\x33\x32\x03\x7f\x00\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x23\x00\x0b\x01\x61");

// data.wast:73
let $8 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x98\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x0a\x67\x6c\x6f\x62\x61\x6c\x5f\x69\x33\x32\x03\x7f\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x23\x00\x0b\x01\x61");

// data.wast:78
let $9 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\xab\x80\x80\x80\x00\x02\x08\x73\x70\x65\x63\x74\x65\x73\x74\x0a\x67\x6c\x6f\x62\x61\x6c\x5f\x69\x33\x32\x03\x7f\x00\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x23\x00\x0b\x01\x61");

// data.wast:90
let $10 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x8f\x80\x80\x80\x00\x02\x00\x41\x00\x0b\x01\x61\x00\x41\xff\xff\x03\x0b\x01\x62");

// data.wast:95
let $11 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x94\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x01\x0b\x8f\x80\x80\x80\x00\x02\x00\x41\x00\x0b\x01\x61\x00\x41\xff\xff\x03\x0b\x01\x62");

// data.wast:101
let $12 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x02\x0b\x89\x80\x80\x80\x00\x01\x00\x41\xff\xff\x07\x0b\x01\x61");

// data.wast:106
let $13 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x0b\x86\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x00");

// data.wast:110
let $14 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x94\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x00\x0b\x86\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x00");

// data.wast:115
let $15 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x00\x0b\x86\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x00");

// data.wast:120
let $16 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x88\x80\x80\x80\x00\x01\x00\x41\x80\x80\x04\x0b\x00");

// data.wast:125
let $17 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x0b\x86\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x00");

// data.wast:129
let $18 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x94\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x00\x0b\x86\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x00");

// data.wast:134
let $19 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x00\x0b\x86\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x00");

// data.wast:139
let $20 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x94\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x00\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x01\x61");

// data.wast:144
let $21 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x95\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x01\x00\x03\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x01\x61");

// data.wast:149
let $22 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\xab\x80\x80\x80\x00\x02\x08\x73\x70\x65\x63\x74\x65\x73\x74\x0a\x67\x6c\x6f\x62\x61\x6c\x5f\x69\x33\x32\x03\x7f\x00\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x00\x0b\x87\x80\x80\x80\x00\x01\x00\x23\x00\x0b\x01\x61");

// data.wast:155
let $23 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\xac\x80\x80\x80\x00\x02\x08\x73\x70\x65\x63\x74\x65\x73\x74\x0a\x67\x6c\x6f\x62\x61\x6c\x5f\x69\x33\x32\x03\x7f\x00\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x01\x00\x03\x0b\x87\x80\x80\x80\x00\x01\x00\x23\x00\x0b\x01\x61");

// data.wast:161
let $24 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x94\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x00\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x01\x0b\x01\x61");

// data.wast:166
let $25 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x95\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x01\x00\x03\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x01\x0b\x01\x61");

// data.wast:173
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x01\x61");

// data.wast:181
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x00\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x01\x61");

// data.wast:189
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x01\x61");

// data.wast:196
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x0b\x86\x80\x80\x80\x00\x01\x00\x41\x01\x0b\x00");

// data.wast:203
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x01\x0b\x86\x80\x80\x80\x00\x01\x00\x41\x01\x0b\x00");

// data.wast:220
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x98\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x0a\x67\x6c\x6f\x62\x61\x6c\x5f\x69\x33\x32\x03\x7f\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x0b\x87\x80\x80\x80\x00\x01\x00\x23\x00\x0b\x01\x61");

// data.wast:229
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x01\x02\x0b\x89\x80\x80\x80\x00\x01\x00\x41\x80\x80\x04\x0b\x01\x61");

// data.wast:236
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x94\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x01\x0b\x89\x80\x80\x80\x00\x01\x00\x41\x80\x80\x04\x0b\x01\x61");

// data.wast:244
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x02\x0b\x89\x80\x80\x80\x00\x01\x00\x41\x80\x80\x08\x0b\x01\x61");

// data.wast:252
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x02\x03\x0b\x89\x80\x80\x80\x00\x01\x00\x41\x80\x80\x08\x0b\x01\x61");

// data.wast:260
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x7f\x0b\x01\x61");

// data.wast:267
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x94\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x7f\x0b\x01\x61");

// data.wast:275
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x02\x0b\x88\x80\x80\x80\x00\x01\x00\x41\x9c\x7f\x0b\x01\x61");

// data.wast:282
assert_uninstantiable("\x00\x61\x73\x6d\x01\x00\x00\x00\x02\x94\x80\x80\x80\x00\x01\x08\x73\x70\x65\x63\x74\x65\x73\x74\x06\x6d\x65\x6d\x6f\x72\x79\x02\x00\x01\x0b\x88\x80\x80\x80\x00\x01\x00\x41\x9c\x7f\x0b\x01\x61");

// data.wast:292
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x0b\x86\x80\x80\x80\x00\x01\x00\x41\x00\x0b\x00");

// data.wast:301
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x86\x80\x80\x80\x00\x01\x00\x42\x00\x0b\x00");

// data.wast:309
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x00\x68\x0b\x00");

// data.wast:317
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x85\x80\x80\x80\x00\x01\x00\x01\x0b\x00");

// data.wast:325
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x01\x41\x00\x0b\x00");

// data.wast:333
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x01\x0b\x87\x80\x80\x80\x00\x01\x00\x41\x00\x01\x0b\x00");
