#include "CourseControllerImpl.h"

CourseControllerImpl::CourseControllerImpl()
{
    //ctor
}
CourseControllerImpl::CourseControllerImpl(int a):courseService(a)
{
    //ctor
}
void CourseControllerImpl::addCourse(Course course){
courseService.addCourse(course);

}
