#include <iostream>
using namespace std;

union mony
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{
    union mony m1;
    m1.rice = 12;
    m1.car = 'c';
    m1.pounds = 15;
    cout << m1.rice << endl;
    cout << m1.car << endl;
    cout << m1.pounds << endl;
    return 0;
}