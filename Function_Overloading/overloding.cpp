#include <iostream>
using namespace std;

int sum(float a, int b);
int sum(int a, int b, int c);
int volume(double r, int h);
int volume(int a);
int volume(int l, int a, int b);

int main()
{
    cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "The sum of 3, 7 and 6 is " << sum(3, 7, 6) << endl;
    cout << "The volume of cylinder of radius 3 and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;
    cout << "The volume of cuboid of 3, 7 and 6 is " << volume(3, 7, 6) << endl;
    return 0;
}

int sum(float a, int b)
{
    cout << "Using function with 2 argument " << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using function with 3 argument " << endl;
    return a + b + c;
}
// calculate the volume of a cylinder
int volume(double r, int h)
{
    return (3.0 / 14 * r * r * h);
}

// calculate the volume of a cub
int volume(int a)
{
    return a * a * a;
}

// calculate the rectangular box
int volume(int l, int a, int h)
{
    return (l * a * h);
}