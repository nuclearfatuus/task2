#include <iostream>


void f1(float k){
    float a = 10.0;
   while ((k/a)> 0.1 || (k/a)<-0.1) {
       std::cout << "1" << std::endl;
       a *= 10;
   }
}

int main() {
    float k = 100.49;
    f1(k);
    return 0;
}