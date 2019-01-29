//
// Created by jetbrains on 2019-01-28.
//


#include <iostream>

class A {
public:
    void test(){
        std::cout << "A";
    }
};

class B : public A {
public:
    void test() { // warn here!
        std::cout << "B";
    }
};
