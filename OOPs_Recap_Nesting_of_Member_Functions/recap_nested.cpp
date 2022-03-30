// OOPs -- classes and objects
// c++ ---> initially called ---> C with classes by stroustrup
// class ---> extension of structures (in c)
// structure had limitations
//         - members are public
//         - No methode
// classes --> structures + more
// classes --> can have methode and properties
// class -- > can make few number as private and few as public
// structure in c++ typedefed
// you can declare objects along with the class declaresion like this :
/* class employee {
       //  class definations
} harry, rohan, lovesh; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member function

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void check_bin(void);

public:
    void read(void);

    void ones_compliment(void);
    void display(void);
};

void binary ::read()
{
    cout << "Enter a binary number :" << endl;
    cin >> s;
}

void binary ::check_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary formate " << endl;
            // break;
            exit(0);
        }
    }
}

void binary ::ones_compliment()

{
    check_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.check_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}