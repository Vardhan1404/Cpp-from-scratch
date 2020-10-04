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


