#include <iostream>
#include "student.h"
using namespace std;

void Student::set_student(string first_name1, string secound_name1,int mark1) {
        first_name = first_name1;
        secound_name = secound_name1;
        mark = mark1;
}
    
string Student::get_name() {
    return first_name;
}   

string Student::get_surname() {
    return secound_name;
}   

int Student::get_mark() {
    return mark;
}

