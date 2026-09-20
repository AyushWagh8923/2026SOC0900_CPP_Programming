#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
int rollno ;
float marks, percentage;
int accept()
{
cout << "Enter Roll Number: ";
cin >> rollno;
cout << "Enter Marks: ";
cin >> marks;
return 0;
}

int display()
{
percentage = marks;
cout << "\nRoll Number: " << rollno << endl;
cout << "Marks: " << marks << endl;
cout << "Percentage: " << percentage << "%" << endl;
return 0;
}
};
int main()
{
Student myobj;
myobj.accept();
myobj.display();
return 0;
}
