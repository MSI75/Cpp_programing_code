

// There are two types of header file :
// 01. System header file : It comes with the compiler
#include <iostream>
// 02. User defined header file : It is written by the programmer
#include "this.h" // ---> This will produce an error if this.h is no present in the current directory

using namespace std;

int main()
{
    cout << "This is hello world programmer !";
    return 0;
}