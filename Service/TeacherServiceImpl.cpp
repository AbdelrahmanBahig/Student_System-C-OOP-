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
if(teacher.getName().size() <=2)
    {
        cout << "Invalid Name !" <<endl;
    }
    else if(teacher.getAge() < 30 || teacher.getAge() > 60)
    {
        cout << "Invalid Age !" <<endl;
    }
    else if(teacher.getPhoneNumber()[0] != '0' ||
            (
    (teacher.getPhoneNumber()[1]+ teacher.getPhoneNumber()[2]) !=( '1'+'1' ) &&
    (teacher.getPhoneNumber()[1]+ teacher.getPhoneNumber()[2]) !=( '1'+'2' ) &&
    (teacher.getPhoneNumber()[1]+ teacher.getPhoneNumber()[2]) != ('1'+'0' ) &&
    (teacher.getPhoneNumber()[1]+ teacher.getPhoneNumber()[2]) != ('1'+'5' )
            )
            || teacher.getPhoneNumber().size() !=11)
    {
        cout << "Invalid Phone Number !" << endl ;
    }
    else if(teacher.getSalary() < 4000.0 || teacher.getSalary() > 15000.0){
        cout << "Invalid Salary !" <<endl;
    }
    else
    {
        teacherReository.addTeacher(teacher);
        cout << "Added successfully !" <<endl;
    }
}
