#ifndef CLASSROOMABSTRACT_H
#define CLASSROOMABSTRACT_H
class ClassRoomAbstract
{
public:
    virtual void register_student(int index) = 0;
    virtual void print_detalis(int index) = 0;
};

#endif