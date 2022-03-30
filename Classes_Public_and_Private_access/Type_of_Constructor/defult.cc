#include <iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void getStudent()
    {
        cout << id << endl
             << gpa << endl
             << endl;
    }
    student(int x, double y) // parametrized  constructor
    {
        id = x;
        gpa = y;
    }

    student() // Defult Constructor
    {
        cout << "Defult constructor :" << endl;
    }
};

int main()
{
    student ob;

    student sha(25, 23.2654);
    sha.getStudent();

    student fine(35, 2365.236987);
    fine.getStudent();
    return 0;
}