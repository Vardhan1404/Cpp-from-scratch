/*
- Friend function is not a member function of class of which it is a friend.
- Declared inside class with friend keyword.
- Defined outside the class
- Friend function can access any member of class to which it is friend.
- but it cannot access members of the class directly.
- Can also access private members.
- No caller object, no membership label

*/

#include<iostream>
#include<conio.h>
using namespace std;

class complex
{

private:
    int a,b;

public:
    void setdata(int x, int y)          // member function
    {
        a=x;
        b=y;
    }


    void showdata()                   // member function
    {
        cout<<" a = "<<a<<" b = "<<b<<endl;
    }


/* Declaring Friend function */
    friend void fun(complex);               // declared inside class

};

/* Defining fun function outside class */
    void fun(complex c)                      //  friend keyword is not used again , and we don't use resolution operator since it is not a member function
    {
// cout<<"sum is "<< a+b  incorrect, cannot access directly.
       cout<<"sum is "<<c.a+c.b;
    }

int main()
{
    complex c1,c2,c3;
    fun(c2);
    return 0;
}


//
