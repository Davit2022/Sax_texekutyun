#include <iostream>
#include "classroom.h"
#include "student.h"
using namespace std;

void Classroom::register_student(int index)
{
    cout << "Enter name" << endl;
    cin >> first_name;
    cout << "Enter secound name" << endl;
    cin >> secound_name;
    cout << "Enter mark" << endl;
    cin >> mark;
    students[index].set_student(first_name, secound_name, mark);
}

void Classroom::print_detalis(int index)
{
    for (int j = 0; j < index; j++)
    {
        cout << "FirstName - " << students[j].get_name() << "\nSecoundName - " << students[j].get_surname() << "\nMark - " << students[j].get_mark();
        cout << endl;
    }
}

Classroom::Classroom(int size)
{
    students = new Student[size];
}

Classroom::~Classroom()
{
    delete[] students;
}
