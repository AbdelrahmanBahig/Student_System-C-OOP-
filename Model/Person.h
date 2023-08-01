#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;


class Person
{
    protected:
         int id;
         string name ;
         int age ;
         string phoneNumber;
         double gpa;

    public:
        Person();
        void setId(int id);
        int getId();
        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
        void setPhoneNumber(string phoneNumber);
        string getPhoneNumber();
};

#endif // PERSON_H
