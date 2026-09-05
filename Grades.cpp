#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter your marks: ";
    cin >> a;

    cout << "Your Grade" << endl;

    if (a >= 70 && a <= 100)
    {
        cout << "Grade: Distinction" << endl;
    }

    if (a >= 60 && a <= 69)
    {
        cout << "Grade: First Class" << endl;
    }

    if (a >= 50 && a <= 59)
    {
        cout << "Grade: Pass" << endl;
    }

    if (a >= 0 && a < 50)
    {
        cout << "Grade: Failed" << endl;
    }

    return 0;
}
