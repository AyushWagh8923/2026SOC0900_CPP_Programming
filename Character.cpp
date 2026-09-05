#include <iostream>
using namespace std;
int main()
{
char ch;
cout << "Enter a character: ";
cin >> ch;
if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
{
cout << "It is an alphabet";
}
else if (ch >= '0' && ch <= '9')
{
cout << "It is a digit";
}
else
{
cout << "It is a symbol";
}
return 0;
}