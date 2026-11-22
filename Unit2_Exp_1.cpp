#include<iostream>
#include<string>
using namespace std;

class person
{
public:
string name;
string college;

person()
{
cout<<"This is a Person"<<endl;
}

void getPerson()
{
cout<<"Enter Name: ";
cin>>name;

cout<<"Enter College: ";
cin>>college;

}
};

class student : public person
{
public:
int rollno;

student()
{
cout<<"This is a Student"<<endl;
}

void getStudent()
{
cout<<"Enter Roll Number: ";
cin>>rollno;
}

void display()
{
cout<<"His/Her name is "<<name<<endl;
cout<<"Studies in "<<college<<endl;
cout<<"Roll Number is "<<rollno<<endl;
}
};
int main()
{
student obj;

obj.getPerson();
obj.getStudent();
obj.display();

return 0;
}
