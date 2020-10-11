/* Member function of one class can be a friend function of another class
Friend function declaration can be done anywhere, irrespective of any access specifier */


#include<iostream>
#include<conio.h>
using namespace std;

class A
{
public:
    void fun()         // Member function of class A
    {  }

    void foo()         // Another Member function of class A
    {     }

};


class B
{
// To make all functions of member class , friend function of another class
//  friend class A;


// to make sure friend function is member function of other class, we add { class_name scope resolution operator }
    friend void A::fun();
    friend void A::foo();

// To show fun function is of no member class
//  friend void fun() ,
};

int main()
{
    return 0;
}
