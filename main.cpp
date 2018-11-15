#include <iostream>

int f1(int k){
    int i = 1;
    int f = 1;
    while (i<=k) {
        f *= i;
        i++;
    };
    return f;
}

int main() {
    int k = 12;
    f1(k);
    std::cout << f1(k) << std::endl;
    return 0;
}