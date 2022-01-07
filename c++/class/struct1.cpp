#include <iostream>

class Person {
    private:
    int age;
    char gender;
    
    public:
    void set_age(int a){
        age = a;;;
    }

    //protected:
    int get_age(){
        return age;
    }
    void speak(){
    std::cout << "I am speaking" << std::endl;
    }
};

void any(){

    int a = 10;

    std::cout << a << std::endl;
    void any2(){

        
    }
}
int main(){
    //Integer var = Integer();
    //Person* Davo = new Person();
    //std::cout << Davo.age << std::endl;
    //Davo->speak();
    any();
}
