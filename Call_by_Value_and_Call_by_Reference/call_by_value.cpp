#include <iostream>
using namespace std;

// int sum(int a, int b);
// void swap(int a, int b); // this will not swap a and b
// void swapPointer(int *a, int *b);      // Call by reference using pointer
// int &swapReferenceVar(int &a, int &b); // Call by reference using c++ reference variable
void swapReferenceVar(int &a, int &b); // Call by reference using c++ reference variable

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swapReferenceVar(x, y) = 720; // Call by reference using c++ reference variable
    swapReferenceVar(x, y); // Call by reference using c++ reference variable
    // swapPointer(&x, &y); // Call by reference using pointer
    // swap(x, y); // this will not swap a and b
    // cout << "The sum of 4 and 5 is " << sum(x, y) << endl;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}

/*

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

*/

// this will not swap a and b
/*
void swap(int a, int b) // swap a   b
{                       // 4    4   5
    int temp = a;       // 4    5   5
    a = b;              // 4    5   4
    b = temp;
}
*/

// Call by reference using pointer
/*
void swapPointer(int *a, int *b) // swap a   b
{                                // 4    4   5
    int temp = *a;               // 4    5   5
    *a = *b;                     // 4    5   4
    *b = temp;
}
*/

// Call by reference using c++ reference variable
// int &swapReferenceVar(int &a, int &b) // swap a   b
void swapReferenceVar(int &a, int &b) // swap a   b
{                                     // 4    4   5
    int temp = a;                     // 4    5   5
    a = b;                            // 4    5   4
    b = temp;
    // return a;
}