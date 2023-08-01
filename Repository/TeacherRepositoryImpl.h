#ifndef TEACHERREPOSITORYIMPL_H
#define TEACHERREPOSITORYIMPL_H
#include "Teacher.h"

class TeacherReository{
public:
    virtual void addTeacher(Teacher teacher) = 0 ;
};
class TeacherRepositoryImpl:public TeacherReository
{
    private:
        int teachersCount ;
        int capacity;
        Teacher * teachers;
    public:
        TeacherRepositoryImpl();
        TeacherRepositoryImpl(int);
         void addTeacher(Teacher teacher) ;

    protected:

};

#endif // TEACHERREPOSITORYIMPL_H
