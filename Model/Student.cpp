#include "Student.h"
int Student::counter=0;
Student::Student()
{
    //ctor
}
void Student:: setGpa(double gpa){
    this->gpa = gpa;
}
double Student:: getGpa(){
    return gpa;

}
 void Student::setTeachers(Teacher teachers[5]){
     for(int i = 0 ; i < sizeof(teachers)/sizeof(teachers[0]) ; i++){
        this->teachers[i] = teachers[i];
     }
 }
 Teacher * Student::getTeachers(){
        return teachers;
        }
void Student::setCourses(Course courses[5]){
for(int i = 0 ; i < sizeof(courses)/sizeof(courses[0]) ; i++){
        this->courses[i] = courses[i];
     }
}
Course * Student::getCourses(){
    return courses;

}
istream &operator>>( istream &input, Student &student)
{
    cout << "Name   Age     PhoneNumber     Gpa     " <<endl;
    input >> student.name;
    input >> student.age;
    input >> student.phoneNumber;
    input >> student.gpa;
    Student::counter++;
    student.id=Student::counter;
    return input;
}

