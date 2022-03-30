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
    student(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    student love(25, 36.25698);
    love.getStudent();

    student hate(75, 236.25987);
    hate.getStudent();
    return 0;
}