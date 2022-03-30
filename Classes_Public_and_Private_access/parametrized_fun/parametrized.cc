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
    }

    void parametrize(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    student tan, tin;
    tan.parametrize(2015, 25.369);
    tan.getStudent();

    tin.parametrize(2016, 23.5687);
    tin.getStudent();
    return 0;
}