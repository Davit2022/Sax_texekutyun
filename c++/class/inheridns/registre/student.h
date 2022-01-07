#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
//namespace Student{
class Student
{
private:
        string first_name;
        string secound_name;
        int mark;

public:
        void set_student(string first_name1, string secound_name1, int mark1);
        string get_name();
        string get_surname();
        int get_mark();
};
//}

#endif