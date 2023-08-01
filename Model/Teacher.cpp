#include "Teacher.h"
int Teacher::counter = 0 ;
Teacher::Teacher()
{
    //ctor
}

void Teacher:: setSalary(double salary){
    this->salary = salary;
}
double Teacher:: getSalary(){
    return salary;
}
void Teacher:: setStudentsId(int studentsId[5]){
for(int i = 0 ; i < sizeof(studentsId) / sizeof(studentsId[0]) ; i++){
this->studentsId[i]= studentsId[i];
}
}
int * Teacher::getStudentsId(){
return studentsId;
}
istream &operator>>( istream &input, Teacher &teacher)
{
    cout << "Name   Age     PhoneNumber     Salary     " <<endl;
    input >> teacher.name;
    input >> teacher.age;
    input >> teacher.phoneNumber;
    input >> teacher.salary;
    Teacher::counter++;
    teacher.id=Teacher::counter;
    return input;
}
