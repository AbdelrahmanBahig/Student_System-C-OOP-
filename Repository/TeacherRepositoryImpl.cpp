#include "TeacherRepositoryImpl.h"
TeacherRepositoryImpl::TeacherRepositoryImpl(){
    capacity = 0 ;
    teachersCount = 0 ;
}
TeacherRepositoryImpl::TeacherRepositoryImpl(int capacity)
{
    this->capacity = capacity;
    teachersCount = 0 ;
    teachers = new Teacher[capacity];
}
void TeacherRepositoryImpl:: addTeacher(Teacher teacher){
if(teachersCount == capacity){
     cout << "You can't add new Teacher , capacity is full !";
}
else{
    teacher.counter++;
    teacher.setId(teacher.counter);
    teachers[teachersCount]= teacher;
    teachersCount++;
}
}
