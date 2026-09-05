#include <iostream>
using namespace std;

int main()
{
int num, original, n1, n2, n3, n4, reverse;
cout << "Enter a four digit number: ";
cin >> num;
original = num;
n1 = num % 10;
num = num / 10;

n2 = num % 10;
num = num / 10;

n3 = num % 10;
num = num / 10;

n4 = num % 10;

reverse = n1 * 1000 + n2 * 100 + n3 * 10 + n4;

cout << "Reverse = " << reverse << endl;

if (original == reverse)
{
cout << "It is a palindrome";
}
else
{
cout << "It is not a palindrome";
}
return 0;
}