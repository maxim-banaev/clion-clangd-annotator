namespace {
    class Foo {
        int i;
    public:
        Foo() : i(0) {}

    public:
        [[deprecated]]
        void depricatedMethod() {}
    };

    int test() {
        Foo f;
        f.depricatedMethod(); // warn here
        return 0;
    }
}