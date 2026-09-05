#include <iostream>
using namespace std;

int main()
{
int a, b, c;

cout << "Enter three numbers (a,b,c): ";
cin >> a;
cin >> b; 
cin >> c;

    if (a > b && a > c)
        cout << "a is greatest number";

    if (b > a && b > c)
        cout << "b is greatest number";

    if (c > a && c > b)
        cout << "c is greatest number";

    return 0;
}