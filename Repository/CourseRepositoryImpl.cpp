#include "CourseRepositoryImpl.h"
CourseRepositoryImpl::CourseRepositoryImpl(){
}
CourseRepositoryImpl::CourseRepositoryImpl(int capacity)
{
    this->capacity = capacity;
    coursesCount = 0;
    courses = new Course[capacity];
}
void CourseRepositoryImpl:: addCourse(Course course){
if(coursesCount = capacity){
         cout << "You can't add new Course , capacity is full !";
}
else{
         course.counter++;
    course.setId(course.counter);
    courses[coursesCount]= course ;
    coursesCount++;
}
}
