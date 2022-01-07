#include <iostream>

void Furc1(int* a){
    *a = 8;
}
char upper_case(char b){
    if (b>=97 && b<=122){
    b=b-32;
    }else if (b>=65 && b<=92){
        b = b+32;
    }
    std::cout << "Entered character in uppercase: " << b << std::endl;
}
char lower_case(char d){

}
bool isUpper_case(char f){ 
    if(j>=65 && j<=90){
    isUpper_case(j);
    else{
    is_lower_case(j);
    }
}
bool is_lower_case(char h){
    if(j>=97 && j<=122){
    upper_case(j);
    }else{
        std::cout << "Lets try again" << std::endl
    }

}
bool is_latter(char j){
    std::cin >> j;
    if(j>=65 && j<=90 || j>=97 && j<=122){
    isUpper_case(j);
    else{
    std::cout << "Pleace write a latter" << std::endl;
    is_latter(j)
}
int main (){
    char j;
    char b;
    int a;
    //std::cin >> a;
    //std::cin >> b;
    //Furc1(&a);
    //std::cout << a << std::endl;
   std::cout<<"Enter a character in lowercase: ";
   std::cin >> j;
   is_latter(j);
}
