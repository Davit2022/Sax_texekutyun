#include <iostream>

void function(int a, int b){
if (a > b){
    std::cout << "a = " << a << " MAX" << std::endl;
    std::cout << "b = " << b << " MIN" << std::endl;
    }else if (a == b){
    std::cout << a << " = " << b << std::endl;
    }else{
    std::cout << "b = " << b << " MAX" << std::endl;
    std::cout << "a = " << a << " MIN" << std::endl;
    }
    int c = a + b;
    std::cout << a << " + " << b << " = " << c << std::endl;
}

int main(){
    int a;
    int b;
    std::cout << "Enter number for a?" << std::endl;
    std::cin >> a;
    std::cout << "Enter number for b?" << std::endl;
    std::cin >> b;
    function(a, b);
    }

