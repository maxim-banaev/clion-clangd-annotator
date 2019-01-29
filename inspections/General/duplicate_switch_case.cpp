//
// Created by jetbrains on 2019-01-28.
//
void test(int a) {
    switch(a) {
        case 1:
            break;
        case 1: // warn here!
            break;
        default:
            break;
    }
}
