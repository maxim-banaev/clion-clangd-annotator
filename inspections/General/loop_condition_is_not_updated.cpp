//
// Created by jetbrains on 2019-01-28.
//
#include <vector>

void test() {
    for (int i = 0; i < 10;) {} // warn here!
}

void test1(int a) {
    do { } while (a == 1); // warn here!
}

void test2(int a) {
    while (1 == a) {} // warn here!
}
