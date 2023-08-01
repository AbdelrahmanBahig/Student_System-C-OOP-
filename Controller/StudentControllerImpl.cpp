#include "StudentControllerImpl.h"

StudentControllerImpl::StudentControllerImpl()
{
    //ctor
}
StudentControllerImpl::StudentControllerImpl(int a) : studentService( a)
{
    //ctor
}
void StudentControllerImpl::addStudent(Student student){
studentService.addStudent(student);

}
