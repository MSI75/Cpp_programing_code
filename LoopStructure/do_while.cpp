#include <iostream>
using namespace std;

int main()
{
    /* do while in c++  */
    // Syntex
    // do
    // {
    //     c++ statements;
    // } while (condition)
    // Printing 1 to 40 using while loop

    int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 40);

    // Example of infinit do_while loop
    do
    {
        cout << i << endl;
        i++;
        // } while (false); // 1
    } while (true);
    return 0;
}