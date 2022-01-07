#include <iostream>

char is_lower_case(char c);
char is_upper_case(char c);
char lower_case(char c);
char upper_case(char c);

char is_latter(char c){
   
    std::cout << "Enter your letter:" << std::endl;
    std::cin >> c;

    if(c >= 65 && c <= 90 || c >= 97 && c <= 122){
         is_lower_case(c);
    }else{
        std::cout << "Try again: " << std::endl;
        is_latter(c);
    }
}

char is_lower_case(char c){
        
    if(c>=97 && c<=122){
        lower_case(c);
    }else{
        is_upper_case(c);
    }
}

char is_upper_case(char c){

    if(c>=65 && c<=90){
        upper_case(c);
    }else{
        std::cout << "Error" << std::endl;
        is_latter(c);
    }
}

char lower_case(char c){
         c = c - 32;
         std::cout << c << std::endl;
}

char upper_case(char c){
         c = c + 32;
         std::cout << c << std::endl;
}
int main(){
        char c;
        is_latter(c);
}
