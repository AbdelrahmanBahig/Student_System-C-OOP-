#ifndef STUDENTREPOSITORYIMPL_H
#define STUDENTREPOSITORYIMPL_H
#include "Student.h"

class StudentRepository{
public:
    virtual void addStudent(Student student) = 0 ;
};
class StudentRepositoryImpl:public StudentRepository
{
    private:
        int studentsCount ;
        int capacity;
        Student * students;
    public:
        StudentRepositoryImpl();
        StudentRepositoryImpl(int);
        void addStudent(Student student);

    protected:

};

#endif // STUDENTREPOSITORYIMPL_H
