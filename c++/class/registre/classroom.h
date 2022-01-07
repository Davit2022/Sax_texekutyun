#include "student.h"
#include <string>
#include "ClassroomAbstract.h"
using namespace std;
//namespace classroom{
class Classroom: public ClassRoomAbstract {

    public:
    Student *students;
    void register_student(int index);
        int mark = 0;
        string first_name;
        string secound_name;

    void print_detalis(int index);
    
    Classroom(int size);

    ~Classroom();
};
//}
