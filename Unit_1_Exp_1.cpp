#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
int rollno;
string name;
int marks[3];
int total;
float percentage;

int accept()
{
cout << "Enter Roll Number: ";
cin >> rollno;
cout << "Enter Name: ";
cin >> name;
cin.ignore();
getline(cin, name);

cout << "Enter Marks of 3 Subjects: ";
for (int i = 0; i < 3; i++)
{
cin >> marks[i];
}

return 0;
}

int result()
{
total = 0;
for (int i = 0; i < 3; i++)
{
total = total + marks[i];
}
percentage = total / 3.0;
return 0;
}
int display()
{
cout << "\n----- Student Details -----" << endl;
cout << "Roll Number: " << rollno << endl;
cout << "Name: " << name << endl;
cout << "Marks: ";
for (int i = 0; i < 3; i++)
{
cout << marks[i] << " ";
}
cout << "\nTotal Marks: " << total << endl;
cout << "Percentage: " << percentage << "%" << endl;

if (percentage >= 70)
cout << "Result: Distinction";
else if (percentage >= 60)
cout << "Result: First Class";
else if (percentage >= 50)
cout << "Result: Pass";
else
cout << "Result: Fail";

return 0;
}
};

int main()
{
Student s;
s.accept();
s.result();
s.display();
 
return 0 ;
}
