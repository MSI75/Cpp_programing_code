#include <iostream>
using namespace std;

// int c = 75;

int main()
{

    // ********* Build in Datatypes*********
    // int a, b, c;
    // cout << "Enter the variable of a : " << endl;
    // cin >> a;
    // cout << "Enter the variable of b : " << endl;
    // cin >> b;

    // c = a + b;
    // cout << "The sum is " << c << endl;

    // cout << "The global c is " << ::c << endl;

    // ********* Float, double and long double Literals**********
    // float a = 34.4;
    // long double b = 34.4;

    // cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

    // cout
    //     << "The value of a is " << a << endl;
    // cout << "The value of b is " << b;

    // ********** Reference Variables**************
    // Rohan -- ---> Monty -- ---> Rohu -- ---> Dangerous Coder

    // float x = 455;
    // float &y = x;
    // cout << x << endl;
    // cout << y << endl;

    // *********** typecasting **********

    int a = 75;
    float b = 75.75;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)a << endl;
    cout << "The value of b is " << int(a) << endl;

    int c = int(b);
    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;

    return 0;
}