#include <iostream>
using namespace std;

int main(){
    int a = 8;
    int b = 10;
    int &ref = a;
    int *pointer1 = &a;
    int *pointer2 = &a;
    cout << "address: " << &a << endl;
    a = 100;
    cout << "1==== "<< *pointer1 << endl;
    cout << "2==== "<<*pointer2 << endl;
    ref = 150; 
    cout << "1==== "<< *pointer1 << endl;
    cout << "2==== "<< a << endl;
    cout << "ref==== "<< ref << endl;
    ref = b;
    cout << "a==== "<< a << endl;

    return 0;


}
