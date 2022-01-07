#include <iostream>

class test{
    public:
    int Field;
    int Field2;
    int Field3;
};

int main(){
    test a = test();
    std::cout << &a << std::endl;
    std::cout << &a.Field << std::endl;
    std::cout << &a.Field2 << std::endl;
    std::cout << &a.Field3::endl;
}
