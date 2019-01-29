//
// Created by jetbrains on 2019-01-29.
//

void test(bool b) {
    if (b == true) {}
    if (true == b) {}

    if (b != true) {}
    if (b == false) {}
    if (b != false) {}


    auto a = b ? true : "hello";
    auto a1 = b ? false : "hello";
}
