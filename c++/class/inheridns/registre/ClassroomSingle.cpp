#include <iostream>
#include "ClassroomAbstract.h"

namespace classroomSingle {
    class ClassRoomSingle : public ClassRoomAbstract {
        static ClassRoomSingle *instance;
    public:
        void print_detalis(int index) override {
            std::cout << "classroomsingle" << std::endl;
        }

        void register_student(int index) override {
            std::cout << "aaaaaaaaa" << std::endl;
        }

        static ClassRoomSingle *getInstance() {

            if (instance == nullptr) {
                instance == new ClassRoomSingle;
            }

            return instance;
        };
    };
}