#include <iostream>
int sum(int, int);
int sub(int, int);
int muld(int, int);
int dif(int, int);

int main(){
    int a;
    int b;
    char c;
    int result;
    std::cout << "Enter opperation: ";
    std::cin >> c;
    std::cout << "Enter first input: ";
    std::cin >> a;
    std::cout << "Enter second input: ";
    std::cin >> b;
    switch (c) {
        case '+':
            result = sum(a, b);
            break;
        case '-':
            result = sub(a, b);
            break;
        case '*':
            result = muld(a, b);
            break;
        case '/':
            result = dif(a, b);
            break;
    }
    std::cout << a << " " << c << " " << b <<" = " << result << std::endl;
    main();
}

int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int muld(int a, int b){
    return a * b;
}
int dif(int a, int b){
    return a / b;
}
