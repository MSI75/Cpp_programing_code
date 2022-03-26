#include <iostream>
using namespace std;

int glo = 72;

void sum()
{
    int a;
    cout << glo;
}

int main()
{
    // int a = 75;
    int glo = 75;
    glo = 100;

    cout << glo;

    // bool isTrue = true;
    bool isTrue = false;
    // int b = 25;

    // int a = 14, b = 75;
    // float a = 75.5, b = 72.25;
    // double b = 75.236598745; // 75.2366

    char b = 'S';
    sum();
    cout << isTrue;

    // cout << "The value of a " << a << "\nThe value of b " << b;
    return 0;
}