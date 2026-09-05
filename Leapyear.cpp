#include <iostream>
using namespace std;
int main()
{
int a;
cout << "Enter a year: ";
cin >> a;
 if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
{
cout << a << " is a Leap Year";
}
else
{
cout << a << " is Not a Leap Year";
}
 return 0;
}