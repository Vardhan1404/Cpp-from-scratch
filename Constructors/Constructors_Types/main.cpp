
/*
- by default , there is default constructor formed from compiler in object body
- whenever object is formed, thereafter constructor is called
- when we forms a constructor , then there is no by default constructor in action from compiler
*/


#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
private:
    int a,b;

public:
    complex(int x, int y)   // Parameterized constructor - having some argument
    {

        a=x; b=y;

    }
    complex()              // Default constructor - no argument
    {

    }
    complex(int k)         // Parameterized constructor
    {
        a=k;
    }
};
int main()
{
    complex c1(6,9), c2=4, c3;
    return 0;
}



/*
When there is more than one version of constructor is present in the code , it is called Constructor Overloading.
Here , name of function is same but difference in terms of arguments
*/

