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
             << gpa << endl;
    };
};

int main()
{
    student robin, uttappa;
    robin.id = 2078;
    robin.gpa = 75.236;
    robin.getStudent();

    uttappa.id = 2079;
    uttappa.gpa = 36.25;
    uttappa.getStudent();
    return 0;
}