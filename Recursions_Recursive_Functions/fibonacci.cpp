#include <iostream>
using namespace std;

int fib(int n);

// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)

int main()
{
    int a;
    cout << "Enter a number :" << endl;
    cin >> a;
    cout << "The terms in fibonacci sequence at possition " << a << " is " << fib(a) << endl;
    return 0;
}

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}