#include "TeacherControllerImpl.h"

TeacherControllerImpl::TeacherControllerImpl()
{
    //ctor
}
TeacherControllerImpl::TeacherControllerImpl(int a):teacherService(a)
{
    //ctor
}
void TeacherControllerImpl::addTeacher(Teacher teacher){
teacherService.addTeacher(teacher);
}
