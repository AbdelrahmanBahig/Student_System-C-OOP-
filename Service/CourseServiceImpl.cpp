#include "CourseServiceImpl.h"

CourseServiceImpl::CourseServiceImpl()
{
    //ctor
}
CourseServiceImpl::CourseServiceImpl(int a): courseRepository(a)
{
    //ctor
}
void CourseServiceImpl::addCourse(Course course){
courseRepository.addCourse(course);

}
