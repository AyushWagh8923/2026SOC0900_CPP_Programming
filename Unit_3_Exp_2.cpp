#include <iostream>
using namespace std;

class Personal
{
public:
void display()
{
cout << "Personal Detail" << endl;
cout << "Name : XYZ" << endl;
cout << "Address : YXZ" << endl;
}
};

class Employee
{
public:
void show()
{
cout << "Employee Details" << endl;
cout << "Employee ID : 101" << endl;
cout << "Department : YTX" << endl;
}
};

class Salary : public Personal, public Employee
{
public:
void display()
{
cout << "Salary Details" << endl;
cout << "Basic Salary = Rs.40000" << endl;
cout << "HRA & DRA = Rs.10000" << endl;
cout << "Gross Salary = Rs.50000" << endl;
}
};

int main()
{
Salary ob;
ob.display();
ob.show();
ob.display();
return 0;
}
