/*

- Constructor is member function of class
- name of constructor and class is SAME
- no return type ; no return keyword
- always instance member func ; never be static
- called by objects immediately after object is formed.

*/


#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:

    int a,b;

public:

    complex()       // complex constructor formed
    {
        cout<<"Hello Constructor, VARDHAN here! "<<endl;
    }
};
int main()
{
    complex c1,c2;
    return 0;
}

/*
It is invoked implicitly when an object is creates
It solves the problem of initialization.
Problem of initialization: when an object is created, the values stored in it are garbage values.
therefore constructor overcomes this problem by providing initial values instead of garbage.
*/
