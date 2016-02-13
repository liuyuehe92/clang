// RUN: c-index-test -index-file %s | FileCheck %s

// rdar://10941790
// Check that we don't get stack overflow trying to index a huge number of
// logical operators.

// ASan and UBSan increase stack usage.
// REQUIRES: not_asan, not_ubsan

// CHECK: [indexDeclaration]: kind: function | name: foo
int foo(int x) {
  return
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x &&
    x;
}
