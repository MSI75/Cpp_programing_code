#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the value of num1 : \n";
    /* "<<" is called Insertion operators */
    cin >> num1;
    /* ">>" is called Extraction operators */

    cout << "Enter the value of num2 : \n"; /* "<<" is called Insertion operators */
    cin >> num2;                            /* ">>" is called Extraction operators */

    cout << "The sum is " << num1 + num2;

    return 0;
}