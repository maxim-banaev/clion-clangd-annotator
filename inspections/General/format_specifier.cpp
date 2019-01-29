//
// Created by jetbrains on 2019-01-28.
//


#include <cstdio>
#include <iostream>

void test() {
    printf("asd", "not_used"); // warn here!
}

void test1() {
    std::cout << "hello", "word";
}

