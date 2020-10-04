/*
- Always a object/instance member function, never be static
- Name same as that of class, preceeded by ~ symbol
- No return type and takes no argument ( no overloading )
- If we do not create destructor in class, then compiler does it by default i.e empty body destructor
- Invoked implicitly when object about to destroy

*/

#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
private:
    int a,b;

public:
    ~complex()   // Destructor called
    {
        cout<<"Destructor has been called!";
    }
};
void fun()
{
    complex obj;
}
int main()
{
    fun();
    return 0;
}

// Release resources allocated to an object
// Destructor is the last function of objet life to be run.
