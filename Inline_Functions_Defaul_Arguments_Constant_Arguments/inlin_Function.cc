#include <iostream>
using namespace std;

inline int product(int a, int b);

int main()
{
    int a, b;
    cout << "Enter the number of a and b :" << endl;
    cin >> a >> b;

    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    return 0;
}

inline int product(int a, int b)
{
    // Not recommended to use below lines with inline function
    // static int c = 0; // this executes only once
    // c = c + 1;        // Next time this function is run, the value of c will be retained
    return a * b;
}