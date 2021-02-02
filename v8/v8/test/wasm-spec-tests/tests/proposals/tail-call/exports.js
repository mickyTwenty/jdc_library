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
  return instance.exports[name];
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

function assert_return(action, expected) {
  let actual = action();
  if (!Object.is(actual, expected)) {
    throw new Error("Wasm return value " + expected + " expected, got " + actual);
  };
}

function assert_return_canonical_nan(action) {
  let actual = action();
  // Note that JS can't reliably distinguish different NaN values,
  // so there's no good way to test that it's a canonical NaN.
  if (!Number.isNaN(actual)) {
    throw new Error("Wasm return value NaN expected, got " + actual);
  };
}

function assert_return_arithmetic_nan(action) {
  // Note that JS can't reliably distinguish different NaN values,
  // so there's no good way to test for specific bitpatterns here.
  let actual = action();
  if (!Number.isNaN(actual)) {
    throw new Error("Wasm return value NaN expected, got " + actual);
  };
}


// exports.wast:3
let $1 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:4
let $2 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x00\x00\x01\x62\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:5
let $3 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x83\x80\x80\x80\x00\x02\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x00\x00\x01\x62\x00\x01\x0a\x8f\x80\x80\x80\x00\x02\x82\x80\x80\x80\x00\x00\x0b\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:7
let $4 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:8
let $5 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x8d\x80\x80\x80\x00\x03\x01\x61\x00\x00\x01\x62\x00\x00\x01\x63\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:9
let $6 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x85\x80\x80\x80\x00\x01\x60\x01\x7f\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x00\x00\x01\x62\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:10
let $7 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:11
let $8 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:12
let $9 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:13
let $10 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:14
let $11 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:16
let $12 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x86\x80\x80\x80\x00\x01\x60\x01\x7f\x01\x7f\x03\x82\x80\x80\x80\x00\x01\x00\x07\x85\x80\x80\x80\x00\x01\x01\x65\x00\x00\x0a\x8e\x80\x80\x80\x00\x01\x88\x80\x80\x80\x00\x00\x20\x00\x41\x01\x6a\x0f\x0b");
let $Func = $12;

// exports.wast:22
assert_return(() => call($12, "e", [42]), 43);

// exports.wast:23
assert_return(() => call($Func, "e", [42]), 43);

// exports.wast:24
let $13 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00");

// exports.wast:25
let $14 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00");
let $Other1 = $14;

// exports.wast:26
assert_return(() => call($Func, "e", [42]), 43);

// exports.wast:28
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x00\x01\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:32
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x00\x00\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:36
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x83\x80\x80\x80\x00\x02\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x00\x00\x01\x61\x00\x01\x0a\x8f\x80\x80\x80\x00\x02\x82\x80\x80\x80\x00\x00\x0b\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:40
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x89\x80\x80\x80\x00\x02\x01\x61\x00\x00\x01\x61\x03\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:44
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x00\x00\x01\x61\x01\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:48
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x00\x00\x01\x61\x02\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:56
let $15 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x85\x80\x80\x80\x00\x01\x01\x61\x03\x00");

// exports.wast:57
let $16 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x89\x80\x80\x80\x00\x02\x01\x61\x03\x00\x01\x62\x03\x00");

// exports.wast:58
let $17 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x8b\x80\x80\x80\x00\x02\x7f\x00\x41\x00\x0b\x7f\x00\x41\x00\x0b\x07\x89\x80\x80\x80\x00\x02\x01\x61\x03\x00\x01\x62\x03\x01");

// exports.wast:60
let $18 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x85\x80\x80\x80\x00\x01\x01\x61\x03\x00");

// exports.wast:61
let $19 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x85\x80\x80\x80\x00\x01\x01\x61\x03\x00");

// exports.wast:62
let $20 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x85\x80\x80\x80\x00\x01\x01\x61\x03\x00");

// exports.wast:63
let $21 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x85\x80\x80\x80\x00\x01\x01\x61\x03\x00");

// exports.wast:64
let $22 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x85\x80\x80\x80\x00\x01\x01\x61\x03\x00");

// exports.wast:65
let $23 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x85\x80\x80\x80\x00\x01\x01\x61\x03\x00");

// exports.wast:67
let $24 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x2a\x0b\x07\x85\x80\x80\x80\x00\x01\x01\x65\x03\x00");
let $Global = $24;

// exports.wast:71
assert_return(() => get($24, "e"), 42);

// exports.wast:72
assert_return(() => get($Global, "e"), 42);

// exports.wast:73
let $25 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00");

// exports.wast:74
let $26 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00");
let $Other2 = $26;

// exports.wast:75
assert_return(() => get($Global, "e"), 42);

// exports.wast:77
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x85\x80\x80\x80\x00\x01\x01\x61\x03\x01");

// exports.wast:81
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x89\x80\x80\x80\x00\x02\x01\x61\x03\x00\x01\x61\x03\x00");

// exports.wast:85
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x06\x8b\x80\x80\x80\x00\x02\x7f\x00\x41\x00\x0b\x7f\x00\x41\x00\x0b\x07\x89\x80\x80\x80\x00\x02\x01\x61\x03\x00\x01\x61\x03\x01");

// exports.wast:89
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x89\x80\x80\x80\x00\x02\x01\x61\x03\x00\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:93
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x89\x80\x80\x80\x00\x02\x01\x61\x03\x00\x01\x61\x01\x00");

// exports.wast:97
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x89\x80\x80\x80\x00\x02\x01\x61\x03\x00\x01\x61\x02\x00");

// exports.wast:105
let $27 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:106
let $28 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x01\x00\x01\x62\x01\x00");

// exports.wast:110
let $29 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:111
let $30 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x85\x80\x80\x80\x00\x01\x70\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:112
let $31 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:113
let $32 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x85\x80\x80\x80\x00\x01\x70\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:114
let $33 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:115
let $34 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x85\x80\x80\x80\x00\x01\x70\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:116
let $35 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:117
let $36 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x85\x80\x80\x80\x00\x01\x70\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:118
let $37 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:119
let $38 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x85\x80\x80\x80\x00\x01\x70\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:120
let $39 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:121
let $40 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x85\x80\x80\x80\x00\x01\x70\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x00");

// exports.wast:125
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x01\x01");

// exports.wast:129
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x01\x00\x01\x61\x01\x00");

// exports.wast:138
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x01\x00\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:142
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x89\x80\x80\x80\x00\x02\x01\x61\x01\x00\x01\x61\x03\x00");

// exports.wast:146
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x01\x00\x01\x61\x02\x00");

// exports.wast:154
let $41 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:155
let $42 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x02\x00\x01\x62\x02\x00");

// exports.wast:159
let $43 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:160
let $44 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:161
let $45 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:162
let $46 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:163
let $47 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:164
let $48 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:165
let $49 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:166
let $50 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:167
let $51 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:168
let $52 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:169
let $53 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:170
let $54 = instance("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x84\x80\x80\x80\x00\x01\x01\x00\x01\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x00");

// exports.wast:174
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x85\x80\x80\x80\x00\x01\x01\x61\x02\x01");

// exports.wast:178
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x02\x00\x01\x61\x02\x00");

// exports.wast:187
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x01\x84\x80\x80\x80\x00\x01\x60\x00\x00\x03\x82\x80\x80\x80\x00\x01\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x02\x00\x01\x61\x00\x00\x0a\x88\x80\x80\x80\x00\x01\x82\x80\x80\x80\x00\x00\x0b");

// exports.wast:191
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x06\x86\x80\x80\x80\x00\x01\x7f\x00\x41\x00\x0b\x07\x89\x80\x80\x80\x00\x02\x01\x61\x02\x00\x01\x61\x03\x00");

// exports.wast:195
assert_invalid("\x00\x61\x73\x6d\x01\x00\x00\x00\x04\x84\x80\x80\x80\x00\x01\x70\x00\x00\x05\x83\x80\x80\x80\x00\x01\x00\x00\x07\x89\x80\x80\x80\x00\x02\x01\x61\x02\x00\x01\x61\x01\x00");
