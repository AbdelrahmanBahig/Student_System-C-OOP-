#ifndef STUDENT_H
#define STUDENT_H
#include "Teacher.h"
#include "Course.h"
#include "Person.h"

class Student : public Person
{
     private:
         double gpa;
         Teacher teachers [5];
         Course courses[5];

    public:
        static int counter ;
        Student();
        void setGpa(double gpa);
        double getGpa();
        void setTeachers(Teacher teachers[5]);
        Teacher * getTeachers();
         void setCourses(Course courses[5]);
        Course * getCourses();
friend istream& operator>>(istream&, Student&);


    protected:


};

#endif // STUDENT_H
