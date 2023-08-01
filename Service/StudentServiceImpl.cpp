#include "StudentServiceImpl.h"

StudentServiceImpl::StudentServiceImpl()
{
    //ctor
}
StudentServiceImpl::StudentServiceImpl(int a) : studentRepository(a)
{
    //ctor
}
void StudentServiceImpl::addStudent(Student student){
studentRepository.addStudent(student);

}
