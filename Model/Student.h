#ifndef STUDENT_H
#define STUDENT_H


class Student
{
     private:
         int id;
         string name ;
         int age ;
         string phoneNumber;
         double gpa;

    public:
        Student();
        void setId(int id);
        int getId();
        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
        void setPhoneNumber(string phoneNumber);
        string getPhoneNumber();
        void setGpa(double gpa);
        double getGpa();



    protected:


};

#endif // STUDENT_H
