#include <iostream>

struct Person{
    int age;
    char gender;

Person(int age1, char gar){
    if (age1 >= 0){
        age = age1;
    }else if(gar == 'f' || gar == 'm' || gar == 'F' || gar == 'M'){
        gender = gar;
    }else{
    gender = 0;
    }

}
Person(int age1){
    if (age1 >= 0){
    age = age1;
    }
    gender = '0';
    }
Person(){
    age = 0;
    gender = '0';
    }
};

int main(){  
     Person D = Person(1, 'F');
     std::cout << "Your age = " << D.age << std::endl;
     std::cout <<"Your gender = " << D.gender << std::endl;
}
