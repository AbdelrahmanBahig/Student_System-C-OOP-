#ifndef COURSESERVICEIMPL_H
#define COURSESERVICEIMPL_H
#include "CourseRepositoryImpl.h"

class CourseService{
public:
    virtual void addCourse(Course course)=0;
};
class CourseServiceImpl :public CourseService
{
    private:
        CourseRepositoryImpl courseRepository;
    public:
        CourseServiceImpl();
        CourseServiceImpl(int);
        void addCourse(Course course);

    protected:

};

#endif // COURSESERVICEIMPL_H
