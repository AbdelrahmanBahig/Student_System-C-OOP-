#ifndef STUDENTCONTROLLERIMPL_H
#define STUDENTCONTROLLERIMPL_H

#include "StudentServiceImpl.h"

class StudentController{
public:
    virtual void addStudent(Student student) =0;
};
class StudentControllerImpl :public StudentController
{
    private:
        StudentServiceImpl studentService;
    public:
        StudentControllerImpl();
        StudentControllerImpl(int);
        void addStudent(Student student);

    protected:

};


#endif // STUDENTCONTROLLERIMPL_H
