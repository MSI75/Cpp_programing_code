#include <iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;
};

int main()
{
    student alm;
    alm.id = 2056;
    alm.gpa = 75.236;
    cout << alm.id << endl
         << alm.gpa << endl;

    student robin;
    robin.id = 2015;
    robin.gpa = 24.36;
    cout << robin.id << endl
         << robin.gpa << endl;
    return 0;
}