//
// Created by jetbrains on 2019-01-28.
//

// Constant condition
void test1(int y) {
    int x = 1;
    if (y == 0 && x == 1) {} // warn here!
    if (true) {}
}

// incompatible cast
void test2() {
    int a;
    a = "hello"; // warn here!
}
// Reference may be nil
void test3() {
    int *ptr = nullptr;
    if (*ptr) { // warn here!
    }
}

// unrecognized selectors
void test4() {

}

// Unreachable code
void test5() {
    return;
    int a; // warn here!
}