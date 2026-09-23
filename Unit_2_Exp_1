#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
int empId;
string empName;
float salary;
float bonus;
float totalSalary;
public:
Employee()
{
empId=0;
empName="Not Available";
salary=0;
bonus=0;
totalSalary=0;
}
Employee(int id,string name,float sal,float bon)
{
empId=id;
empName=name;
salary=sal;
bonus=bon;
totalSalary=salary+bonus;
}
int display()
{
cout<<"\nEmployee ID: "<<empId<<endl;
cout<<"Employee Name: "<<empName<<endl;
cout<<"Salary: "<<salary<<endl;
cout<<"Bonus: "<<bonus<<endl;
cout<<"Total Salary: "<<totalSalary<<endl;
return 0;
}
};
int main()
{
Employee e1;
Employee e2(101,"Ayush",30000,5000);
cout<<"--- Default Constructor ---"<<endl;
e1.display();
cout<<"\n-- Parameterized Constructor  ---"<<endl;
e2.display();
return 0;
}
