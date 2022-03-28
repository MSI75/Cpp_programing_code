#include <iostream>
using namespace std;

// function prototype
// type function name (argument)
// int sum(int a, int b); // ---> Acceptable
// int sum(int a, b);     // ---> Not Acceptable
int sum(int, int); // ---> Acceptable

void g(void); // ---> Acceptable
void g();     // ---> Acceptable

int main()
{
    int num1, num2;
    cout << "Enter the num1" << endl;
    cin >> num1;
    cout << "Enter the num2" << endl;
    cin >> num2;
    // num1 and num2 actual parameters
    cout << "The sum is " << sum(num1, num2) << endl;
    g();
    return 0;
}

int sum(int a, int b)
{
    // Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello, Good Morning";
}