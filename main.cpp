#include <iostream>
void f1() { std::cout << "f1/n"; }
void f2() { f1(); f1(); }
    int main () {
    f1();
    f2();
    return 0;
}
