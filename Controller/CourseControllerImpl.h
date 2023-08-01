#ifndef COURSECONTROLLERIMPL_H
#define COURSECONTROLLERIMPL_H

#include "CourseServiceImpl.h"


class CourseController{
public:
    virtual void addCourse(Course course)=0;
};
class CourseControllerImpl :public CourseController
{
    private:
        CourseServiceImpl courseService;
    public:
        CourseControllerImpl();
        CourseControllerImpl(int);
        void addCourse(Course course);

    protected:

};

#endif // COURSECONTROLLERIMPL_H
