#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include "StudentControllerImpl.h"
#include "TeacherControllerImpl.h"
#include "CourseControllerImpl.h"
void displaySystemMenu()
{
    cout << "************  Education Management System  ***************\n\n" ;
    cout << "1-About Students " <<"\t\t"<< "2-About Teachers \n";
    cout << "3-About Courses " <<"\t\t"<< "4-Exit \n";
    cout << "Please enter number form menu choices ^_^\n";
}
void displayItemList(string item)
{
    cout << "************  "<< item<<" Management System  ***************\n\n" ;
    cout << "1-Add " <<item<<"\t\t"<< "2-Remove "<<item<<"\n";
    cout << "3-Update " << item<<"\t\t"<< "4-Display "<<item<<"\n";
    cout << "5-Exit\n";
    cout << "Please enter process form menu choices to do ^_^\n";
}

using namespace std;

int main()
{
    int choice, num;
    do
    {
        displaySystemMenu();
        cin >> choice;
        switch(choice)
        {
        case 1:
        {
            cout <<"Enter Number of Students want to add: \n";
            cin >> num ;
            StudentControllerImpl studentController(num);
            do
            {
                displayItemList("Students");
                cin >> choice;
                switch(choice)
                {
                case 1:
                {
                    Student student;
                    cin >> student;
                    studentController.addStudent(student);
                   // cout << "Id:" <<student.getId()<< endl ;
                }

                break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                default :
                    cout <<"Invalid choice,please choose from given list\n";

                }//end switch
            }
            while(choice!=5);
        }//case 1
        break;
        case 2:
        {
            cout <<"Enter Number of Teachers want to add: \n";
            cin >> num ;
            TeacherControllerImpl teacherController(num);
            do
            {
                displayItemList("Teachers");
                cin >> choice;
                switch(choice)
                {
                case 1:
                {
                    Teacher teacher;
                    cin >> teacher;
                    teacherController.addTeacher(teacher);
                }

                break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                default :
                    cout <<"Invalid choice,please choose from given list\n";

                }//end switch
            }
            while(choice!=5);
        }//case 2
        break;
        case 3 :
        {
            cout <<"Enter Number of Courses want to add: \n";
            cin >> num ;
            CourseControllerImpl courseController(num);
            do
            {
                displayItemList("Courses");
                cin >> choice;
                switch(choice)
                {
                case 1:
                {
                    Course course;
                    cin >> course;
                    courseController.addCourse(course);
                }

                break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                default :
                    cout <<"Invalid choice,please choose from given list\n";

                }//end switch
            }
            while(choice!=5);
        }//case 2

        break;
        case 4 :
            break;
        }
    }
    while(true);
    return 0;
}
