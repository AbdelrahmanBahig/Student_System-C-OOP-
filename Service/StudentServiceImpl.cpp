#include "StudentServiceImpl.h"

StudentServiceImpl::StudentServiceImpl()
{
    //ctor
}
StudentServiceImpl::StudentServiceImpl(int a) : studentRepository(a)
{
    //ctor
}
void StudentServiceImpl::addStudent(Student student)
{
    if(student.getName().size() <=2)
    {
        cout << "Invalid Name" <<endl;
    }
    else if(student.getAge() < 18 || student.getAge() > 30)
    {
        cout << "Invalid Age" <<endl;
    }
    else if(student.getPhoneNumber()[0] != '0' ||
            (
    (student.getPhoneNumber()[1]+ student.getPhoneNumber()[2]) !=( '1'+'1' ) &&
    (student.getPhoneNumber()[1]+ student.getPhoneNumber()[2]) !=( '1'+'2' ) &&
    (student.getPhoneNumber()[1]+ student.getPhoneNumber()[2]) != ('1'+'0' ) &&
    (student.getPhoneNumber()[1]+ student.getPhoneNumber()[2]) != ('1'+'5' )
            )
            || student.getPhoneNumber().size() !=11)
    {
        cout << "Invalid Phone number" << endl ;
    }
    else if(student.getGpa() > 4.0 || student.getGpa() < 0){
        cout << "Invalid gpa" <<endl;
    }
    else
    {
        studentRepository.addStudent(student);
        cout << "Added successfully!" <<endl;
    }

}
