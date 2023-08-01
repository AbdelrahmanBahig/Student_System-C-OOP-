#include "Course.h"
int Course::counter =0 ;
Course::Course()
{
    //ctor
}
void Course:: setId(int id){
    this->id = id;
}
int Course:: getId(){
    return id;
}
void Course:: setName(string name){
    this->name = name ;
}
string Course:: getName(){
    return name;
}
void Course:: setHours(double hours){
    this->hours = hours  ;
}
int Course:: getHours(){
    return hours ;
}
void Course:: setStudentsId(int studentsId[5]){
for(int i = 0 ; i < sizeof(studentsId) / sizeof(studentsId[0]) ; i++){
this->studentsId[i]= studentsId[i];
}
}
int * Course::getStudentsId(){
return studentsId;
}
istream &operator>>( istream &input, Course&course)
{
    cout << "Name   Hours        " <<endl;
    input >> course.name;
    input >> course.hours;

    return input;
}
