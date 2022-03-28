#include <iostream>
using namespace std;

// struct emplay
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// };

typedef struct emplay
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

int main()
{
    // struct emplay harry;
    ep harry;
    harry.eId = 75;
    harry.favChar = 'c';
    harry.salary = 1254235;

    cout << "The value is " << harry.eId << endl;
    cout << "The value is " << harry.favChar << endl;
    cout << "The value is " << harry.salary << endl;
    return 0;
}