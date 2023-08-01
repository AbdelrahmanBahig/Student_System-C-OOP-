#ifndef COURSEREPOSITORYIMPL_H
#define COURSEREPOSITORYIMPL_H
#include "Course.h"


class CourseReository{
public:
    virtual void addCourse(Course course) = 0 ;
};
class CourseRepositoryImpl:public CourseReository
{
    private:
        int coursesCount ;
        int capacity;
        Course * courses;
    public:
        CourseRepositoryImpl();
        CourseRepositoryImpl(int);
         void addCourse(Course course) ;

    protected:

};
#endif // COURSEREPOSITORYIMPL_H
