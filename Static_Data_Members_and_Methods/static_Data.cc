#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount()
    {
        // cout << id; throws in error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee ::count; // Default value is 0

int main()
{
    Employee harry, rohan, hisee;

    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

        harry.getData();
    harry.setData();
    Employee ::getCount();

    rohan.getData();
    rohan.setData();
    Employee ::getCount();

    hisee.getData();
    hisee.setData();
    Employee ::getCount();
    return 0;
}