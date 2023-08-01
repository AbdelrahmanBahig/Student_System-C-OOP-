#ifndef TEACHERCONTROLLERIMPL_H
#define TEACHERCONTROLLERIMPL_H

#include "TeacherServiceImpl.h"


class TeacherController{
public:
    virtual void addTeacher(Teacher teacher) =0;
};

class TeacherControllerImpl :public TeacherController
{
    private:
        TeacherServiceImpl teacherService;
    public:
        TeacherControllerImpl();
        TeacherControllerImpl(int);
        void addTeacher(Teacher teacher);

    protected:

};

#endif // TEACHERCONTROLLERIMPL_H
