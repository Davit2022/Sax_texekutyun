#include <iostream>

int main (){
    short i = 8;
    short* t = &i;
    *t = 10;
    std::cout << i << std::endl;
    short r = 7;
    t = &r;
    *t = 3;
    std::cout << r << std::endl;
    short a = 1;
    short* c = &a;
    std::cout << &a << std::endl;
    std::cout << &c << std::endl;
    std::cout << c << std::endl;
}
