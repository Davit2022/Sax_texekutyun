#include <string>
#include "student.h"
#include "ClassroomAbstract.h"
using namespace std;

#ifndef CLASSROOM_H
#define CLASSROOM_H

class Classroom : public ClassRoomAbstract
{

public:
    Student *students;
    int mark = 0;
    string first_name;
    string secound_name;

    void register_student(int index) override;
    void print_detalis(int index) override;
    Classroom(int size);
    ~Classroom();
};

#endif