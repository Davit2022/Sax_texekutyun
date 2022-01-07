#include <iostream>

int main(){
    int a = 10;
    {
    a = 7;
    }
    std::cout << a << std::endl;
}
