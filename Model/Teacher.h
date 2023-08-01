#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher:public Person
{
      private:
         double salary;
         int studentsId[5];

    public:
        static int counter;
        Teacher();
        void setSalary(double gpa);
        double getSalary();
        void setStudentsId(int studentsId[]);
        int * getStudentsId();
       friend istream &operator>>( istream &input, Teacher &teacher);

    protected:


};

#endif // TEACHER_H
