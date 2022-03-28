#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 24, 25, 26};
    /*
        cout << "These are marks" << endl;
        cout << marks[0] << endl;
        cout << marks[1] << endl;
        cout << marks[2] << endl;
        cout << marks[3] << endl;
    */

    /*
        cout << "These are math marks" << endl;
        int mathMarks[4];
        mathMarks[0] = 98;
        mathMarks[1] = 90;
        mathMarks[2] = 95;
        mathMarks[3] = 92;

        cout << mathMarks[0] << endl;
        cout << mathMarks[1] << endl;
        cout << mathMarks[2] << endl;
        cout << mathMarks[3] << endl;
     */

    // For

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    // int i = 0;
    /*
     while (i < 4)
     {
         cout << marks[i] << endl;
         i++;
     }
    */

    /*
       do
        {
            cout << marks[i] << endl;
            i++;
        } while (i < 4);
    */
    // Pointers an array
    int *p = marks;
    cout << *(p++) << endl;
    cout << *(++p) << endl;
    cout << *(++p) << endl;
    /*
     cout << "The value of marks *p is " << *p << endl;
     cout << "The value of marks *(p+1) is " << *(p + 1) << endl;
     cout << "The value of marks *(p+2) is " << *(p + 2) << endl;
     cout << "The value of marks *(p+3) is " << *(p + 3) << endl;
     */
    return 0;
}