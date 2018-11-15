#include <iostream>

void f2(){
    std::cout << "Hello, my name is f2" << std::endl;
}

void f3(){
    f2();
    std::cout << "Hello, my name is f3" << std::endl;
}

void f1(){
    f2();
    f3();
    std::cout << "Hello, my name is f1" << std::endl;
}

int main() {
    f1();
    return 0;
}