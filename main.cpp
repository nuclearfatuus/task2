#include <iostream>


void f1(int a, float k){
    switch(a){
        case 1: std::cout << "Hello, me name is f1" << std::endl;
        break;
        case 2: {int b = k/1.0;
            std::cout << b << std::endl;}
            break;
        case 3: {int b = k/1.0;
        float c = k-b;
            std::cout << c << std::endl;}
            break;
        default: std::cout << "Hello, my name is f1" << std::endl;
    }
}

int main() {
    int a = 5;
    float k = 100.49;
    f1(a, k);
    return 0;
}