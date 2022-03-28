#include <iostream>
using namespace std;

int factorial(int n);

// step by step calculation factorial(4)
// factorial(4) = 4 * factorial(3)
// factorial(4) = 4 * 3 * factorial(2)
// factorial(4) = 4 * 3 * 2 factorial(1)
// factorial(4) = 4 * 3 * 2 * 1
// factorial(4) = 24

int main()
{
    int n;
    cout << "Enter a number :" << endl;
    cin >> n;
    cout << "The factareal number " << factorial(n) << endl;
    // Factorial of a number :
    // 6! = 6*5*4*3*2*1 = 720
    // 0 ! = 1 by definition
    // 1! = 1 by definition
    // n! = n * (n-1)
    return 0;
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}