#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;


class Course
{
    private:
         int id;
         string name ;
         double hours ;
         int studentsId[5];

    public:
        static int counter ;
        Course();
        void setId(int id);
        int getId();
        void setName(string name);
        string getName();
        void setHours(double hours);
        int getHours();
        void setStudentsId(int studentsId[]);
        int * getStudentsId();
        friend istream &operator>>( istream &input, Course&course) ;
    protected:

};

#endif // COURSE_H
