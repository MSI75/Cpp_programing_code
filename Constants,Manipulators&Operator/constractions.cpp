#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a = 75;
    // cout << "The value of a was " << a << endl;
    // a = 100;
    // cout << "The value of a is " << a << endl;

    // const int a = 75;
    // cout << "The value of a was " << a << endl;
    // a = 100; // you will get an error because a is constant
    // cout << "The value of a is " << a << endl;

    // Manipulators in c++

    // int a = 3, b = 78, c = 1233;
    // cout << "The value of a without setw is :" << a << endl;
    // cout << "The value of b without setw is :" << b << endl;
    // cout << "The value of c without setw is :" << c << endl;

    // cout << "The value of a setw is :" << setw(4) << a << endl;
    // cout << "The value of b setw is :" << setw(4) << b << endl;
    // cout << "The value of c setw is :" << setw(4) << c << endl;

    // operator precedence
    int a = 3, b = 4;
    // int c = a * 5 + b;
    int c = ((((a * 5) + b) - 45) + 87);

    cout << c;

    return 0;
}