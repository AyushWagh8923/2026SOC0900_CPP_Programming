#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
string name;
int age;

public:
Person(string n, int a)
{
name=n;
age=a;
}

void display()
{
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
}
};

class Student : virtual public Person
{
protected:
int rollNumber;
string course;

public:
Student(string n, int a, int r, string c)
: Person(n,a)
{
rollNumber=r;
course=c;
}
};

class Employee : virtual public Person
{
protected:
int employeeID;
float salary;

public:
Employee(string n, int a, int id, float s)
: Person(n,a)
{
employeeID=id;
salary=s;
}
};

class WorkingStudent : public Student, public Employee
{
int workHours;

public:
WorkingStudent(string n, int a, int r, string c, int id, float s, int h)
: Person(n,a), Student(n,a,r,c), Employee(n,a,id,s)
{
workHours=h;
}

void displayWorkingStudent()
{
display();
cout<<"Roll Number: "<<rollNumber<<endl;
cout<<"Course: "<<course<<endl;
cout<<"Employee ID: "<<employeeID<<endl;
cout<<"Salary: "<<salary<<endl;
cout<<"Work Hours: "<<workHours<<endl;
}
};

class Base1
{
public:
void show()
{
cout<<"Base1 Show"<<endl;
}
};

class Base2
{
public:
void show()
{
cout<<"Base2 Show"<<endl;
}
};

class Derived : public Base1, public Base2
{
public:
void resolveAmbiguity()
{
Base1::show();
Base2::show();
}
};

int main()
{
WorkingStudent ws("Bob",25,202,"CS",5001,45000,20);
ws.displayWorkingStudent();

Derived d;
d.resolveAmbiguity();

return 0;
}
