#include <iostream>
using namespace std;

// float monyReceive(int currectMany, float factor = 1.04);
float monyReceive(int currectMany, float factor = 1.04)
{
    return currectMany * factor;
}

int main()
{
    int mony = 100000;
    cout << "If you have " << mony << " received in your bank account, you will received " << monyReceive(mony) << endl;
    cout << "If you have " << mony << " received in your bank account, you will received " << monyReceive(mony, 1.12) << endl;
    return 0;
}

// int strlen(const char *p){

// }