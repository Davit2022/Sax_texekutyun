#include <iostream>
#include <string>
#include "classroom.h"
//#include "student.h"
using namespace std;

#define MESSAGE "Add new student?"

int main() {
    int mark = 0;
    int index = 0;
    string first_name;
    string secound_name;
    string answer;
    Classroom* room1 = new Classroom(2);
    do {
        room1->register_student(index);
        cout << MESSAGE << endl;
        cin >> answer;
        ++index;
    } while(answer == "YES" || answer == "Yes" || answer == "yes");
    
    room1->print_detalis(index);
    //delete room1;
}                  
