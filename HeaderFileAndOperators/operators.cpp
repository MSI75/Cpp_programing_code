#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the a input : " << endl;
    cin >> a;
    cout << "Enter the b input : " << endl;
    cin >> b;

    cout << "operators in c++ : " << endl;
    cout << "Following of the types of operators in c++ : " << endl;

    // Arithmetic Operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a + b is " << a - b << endl;
    cout << "The value of a + b is " << a * b << endl;
    cout << "The value of a + b is " << a / b << endl;
    cout << "The value of a + b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++b is " << ++b << endl;
    cout << "The value of --b is " << --b << endl;

    // Assignment Operators ----> used to assign values to variables
    /*  int a = 3, b = 5;
       char d = 'd';
    */
    // comparision operators
    cout << "Following are the comparision operators in c++ :" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;

    // Logical Operators
    cout << "Following are the logical operators in c++ :" << endl;

    cout << "The value of logical and operators (a == b)  && (a < b)  is : " << ((a == b) && (a < b)) << endl;
    cout << "The value of logical or operators (a == b) || (a < b) is : " << ((a == b) || (a < b)) << endl;
    cout << "The value of logical not operators (! a == b) is : " << (!(a == b)) << endl;

    return 0;
}