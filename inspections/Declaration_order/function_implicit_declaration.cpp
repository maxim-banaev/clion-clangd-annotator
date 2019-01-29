//
// Created by jetbrains on 2019-01-28.
//

void test() {
    fun(2, "21"); /* The compiler has not seen the declaration. */
}

void fun(int x, char *p) {
    /* ... */
}