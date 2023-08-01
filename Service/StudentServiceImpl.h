#ifndef STUDENTSERVICEIMPL_H
#define STUDENTSERVICEIMPL_H
#include "StudentRepositoryImpl.h"

class StudentService{
public:
    virtual void addStudent(Student student) =0;
};
class StudentServiceImpl :public StudentService
{
    private:
        StudentRepositoryImpl studentRepository;
    public:
        StudentServiceImpl();
        StudentServiceImpl(int);
        void addStudent(Student student);

    protected:

};

#endif // STUDENTSERVICEIMPL_H
