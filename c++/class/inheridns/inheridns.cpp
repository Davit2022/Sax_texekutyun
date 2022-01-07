#include <iostream>
#include <string>
using namespace std;

class Human {
public:
    string name;
};
 
class Student : public Human
{
public:
    string group;
    void Learn()
    {
        cout << "I am learning!"<<endl;

    }
};

class Professor : public Human {
public:
    string subject;
};
int main(){
    Human h;

    Student st;
    st.Learn();

    Professor pr;
    


}
