//
// Created by jetbrains on 2019-01-29.
//

namespace {
    class Foo {
        int i;
    public:
        Foo() : i(0) {}

    public:
        [[deprecated]]
        void depricatedMethod() {}
    };

    int main() {
        Foo f;
        f.depricatedMethod(); // warn here
        return 0;
    }
}