#include <iostream>

class triangle{
int a;
char m;
int e;
public:
    void print_star(int a, char m){
    for (int i=0; i<a; i++){
        for(int j=0; j<=i; j++){
        std::cout << m;
        }
        std::cout << "\n";
    }  
}

void print_star_g(int a, char m){
    for(int i=a;i>=0;i--){
        for(int j=1;j<=i; j++){
            std::cout << m;
        }
        std::cout << "\n";
    }  
}

void print_star_o(int a, char c){

        for (int i=a; i>=1; i--)
        {
                for (int j=a - i; j>0; j--)
                {
                        std::cout << " ";
                }
                for(int k=1;k<=i;k++){
        std::cout << c ;
        }
std::cout << "\n";

        }
}
void print_star_desc(int a, char m){
    for(int i=0;i<a;i++){
        for(int j=0;j<=a-i; j++){
            std::cout << " ";
        }
        for (int l=0;l<=i;l++){
        std::cout << m;
        }
        std::cout << "\n";
    }  
}
void print_star_burger(int a, char m)
{
    for(int i=1; i<=a; i++)
    {  
        for(int space=a; space>i; space--)
            std::cout<<" ";
        for(int j=0; j<i; j++)
            std::cout << m << " ";
        std::cout<<"\n";
    }  
    std::cout<<"\n";
}
};
int main(){
    int a;
    int e;
    char m;
    triangle P;
    std::cout << "Enter number" << std::endl;
    std::cin >> a;
    std::cout << "Enter symbol" << std::endl;
    std::cin >> m;
    std::cout << "write the letter of the drawing" << "\n\n";
    std::cout << "rectangular up from right to left(1)" << std::endl;
    std::cout << "rectangular up from left to right(2)" << std::endl;
    std::cout << "rectangle down from right to left(3)" << std::endl;
    std::cout << "rectangle down from left to right(4)" << std::endl;
    std::cout << "draw a pyramid(5)" << std::endl;
    std::cin >> e;
    if (e == 1){
        P.print_star(a, m);
    }else if(e == 2){
        P.print_star_desc(a, m);
    }else if(e == 3){
        P.print_star_o(a, m);
    }else if(e == 4){
        P.print_star_g(a, m);
    }else if(e == 5){
        P.print_star_burger(a, m);
}
}
