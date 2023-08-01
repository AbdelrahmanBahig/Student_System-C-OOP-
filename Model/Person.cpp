#include "Person.h"

Person::Person()
{
    //ctor
}
void Person:: setId(int id){
    this->id = id;
}
int Person:: getId(){
    return id;
}
void Person:: setName(string name){
    this->name = name ;
}
string Person:: getName(){
    return name;
}
void Person:: setAge(int age){
    this->age = age ;
}
int Person:: getAge(){
    return age ;
}
void Person:: setPhoneNumber(string phoneNumber){
    this->phoneNumber = phoneNumber;
}
string Person:: getPhoneNumber(){
    return phoneNumber;
}
