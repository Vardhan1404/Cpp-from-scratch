/*
CONSTRUCTORS:
- Child class constructor calls parent class constructor
- Order of constructor execution : from PARENT to CHILD.
- Order of constructor calling : from CHILD to PARENT.
- Compiler always calls default constructor by default on his own.

DESTRUCTORS:
- Order of destructor execution : from CHILD to PARENT.
- Order of destructor calling : from CHILD to PARENT.
- Compiler does everything by its own in destructor.
*/

#include <iostream>
#include<conio.h>
using namespace std;
class A
{
    int a;
public:
    A(int k)      // parametrized constructor
//  A()          // default constructor
    { a = k; }

    ~A()        // destructor of class A
    {  }
};

class B:public A
{
    int b;
public:
//   B():A()  // syntax to call parent constructor when both class constructors are made by compiler as default constructor.
    B(int x, int y):A(x)
// if parent class has no default constructor, then in child class, we have to make a constructor also to call parent constructor with necessary arguments.
    { b = y; }

    ~B()       // destructor of class B
    {  }      // when destructor of child class finishes its coding in body then it calls parent class destructor.

} ;

int main()
{
    B obj(2,3);
}
