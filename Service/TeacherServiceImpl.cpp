#include "TeacherServiceImpl.h"

TeacherServiceImpl::TeacherServiceImpl()
{
    //ctor
}
TeacherServiceImpl::TeacherServiceImpl(int a) :teacherReository(a)
{
    //ctor
}
void TeacherServiceImpl::addTeacher(Teacher teacher){
teacherReository.addTeacher(teacher);
}
