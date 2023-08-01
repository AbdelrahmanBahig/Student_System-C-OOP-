#ifndef TEACHERSERVICEIMPL_H
#define TEACHERSERVICEIMPL_H
#include "TeacherRepositoryImpl.h"
class TeacherService{
public:
    virtual void addTeacher(Teacher Teacher) =0;
};

class TeacherServiceImpl :public TeacherService
{
    private:
        TeacherRepositoryImpl teacherReository;
    public:
        TeacherServiceImpl();
        TeacherServiceImpl(int);
        void addTeacher(Teacher teacher);

    protected:

};

#endif // TEACHERSERVICEIMPL_H
