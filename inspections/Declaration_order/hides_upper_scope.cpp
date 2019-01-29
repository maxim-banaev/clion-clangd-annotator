//
// Created by jetbrains on 2019-01-28.
//

void test() {
    int a;
    int v[3] = {1, 2, 3};

    for (auto item : v) {
        int a; // warn here!
    }
}
