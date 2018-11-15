#include <iostream>

void f2(float k){
    int a = k/1.0;

    float b = k - a;

    float c = b*100;

    int d = c/1.0;

    float e = c - d;

    if (e>0){
        std::cout << "k has 3 or more digits after comma" << std::endl;
    }
    else {
        std::cout << "k has less than 3 digits after comma" << std::endl;
    }
}

void f1(float k){
    if(k>=-100 && k<=37.5) {
            std::cout << "k is belong to [-100;37.5]" << std::endl;
            f2(k);
        }
        else {
        std::cout << "k is not belong to [-100;37.5]" << std::endl;
        }
}

int main() {
    float k = -152.49;
    f1(k);
    return 0;
}