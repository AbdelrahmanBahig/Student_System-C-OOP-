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
     if(course.getName().size() <=4)
    {
        cout << "Invalid Name" <<endl;
    }
    else if(course.getHours() < 5 || course.getHours()> 15)
    {
        cout << "Invalid Age" <<endl;
    }
    else{
courseRepository.addCourse(course);
        cout <<"Added Successfully ! " <<endl;
    }

}
