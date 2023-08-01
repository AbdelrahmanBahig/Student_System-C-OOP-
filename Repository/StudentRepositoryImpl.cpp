#include "StudentRepositoryImpl.h"
StudentRepositoryImpl::StudentRepositoryImpl(){
capacity = 0 ;
studentsCount = 0 ;
}

StudentRepositoryImpl::StudentRepositoryImpl(int capacity)
{
    this->capacity = capacity ;
    studentsCount = 0 ;
    students = new Student[capacity];
}
void StudentRepositoryImpl::addStudent(Student student){
    if(studentsCount == capacity){
        cout << "You can't add new student , capacity is full !";
    }
    else{
        student.counter++;
    student.setId(student.counter) ;
    students[studentsCount]= student ;;
    studentsCount++;
    }
    cout << student.getId() ;

}
