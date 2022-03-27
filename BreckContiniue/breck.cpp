#include <iostream>
using namespace std;

int main()
{
    /*

    for (int i = 0; i < 40; i++)
    {
        // cout << i << endl; // 0 1 2

        if (i == 2)
        {
            break; // stop for 2
        }
        cout << i << endl; // 0 1
    }

    */

    for (int i = 0; i < 40; i++)
    {
        if (i == 2)
        {
            continue; // only 2 remove
        }
        cout << i << endl;
    }
    return 0;
}