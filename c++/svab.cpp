#include <iostream>

int sort(int* z, int size){
    //std::cout << h;
    for(int i=1; i<size; i++){
        for(int j=0; j<i; j++){
            if(z[j] < z[i] ){
                z[j] = z[i];
            }
        }
    }
    //std::cout << h[];
    return *z;
}
void pn(int &c, int &b){
    int e = c;
    c = b;
    b = e;

}
void Normal(int* c, int* d){
    int e = *c;
    *c = *d;
    *d = e;
}

void Mathematical(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;

}
int main(){
    int z[] = {1, 2, 5, 4, 6, 7, 9, 8};
    //int h = sizeof(z)/sizeof(int);
    int a;
    int b;
    int c;
    int d;
    int res;
    int size = sizeof(z)/sizeof(int);
    std::cout << "enter number for a" << std::endl;
    std::cin >> a;
    std::cout << "Enter number for b" << std::endl;
    std::cin >> b;
    std::cout << "a = " << a << "\nb = " << b << std::endl;
    std::cout << "Normal transfer(1), Mathematical transfer(2)" << std::endl;
    std::cin >> d;
    if(d == 1){
    Normal(&a, &b);
    }else if(d == 2){
        Mathematical(a, b); 
    }else if (d == 3){
        pn(a, b);
    }else{
        res = sort(z, size);
    }
    std::cout << "a = " << a << "\nb = " << b << std::endl;
    std::cout << res << std::endl;
    
}
