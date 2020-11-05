/*
Base class pointer : It can point to the object of any of its descendant class

- Parent class pointer can access child class object.
- If we call function by pointer , then we look for the type of pointer.
- With virtual keyword, we look for the content of the pointer i.e the address pointer contains.

  // PROBLEM OF METHOD OVERRIDING overcomes by VIRTUAL FUNCTION
- calling is done from parent pointer but even after making object of class child, child f1 is not working
- solution is to stop early binding.
- Concept of LATE BINDING or RUN TIME BINDING by addition of virtual keyword.
*/


#include <iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    virtual void f1() { cout<<" f1 of class A runs "<<endl; }         // virtual keyword : stops early binding : do late binding , at execution time binding
};
class B: public A
{
public:
    void f1()   { cout<<" f1 function of class B "<<endl; }     // Function overriding
    void f2()   { cout<<" f2 function of class B "<<endl; }

};
int main()
{
    A *p, o1;
    B o2;
    p = &o2;         // Parent class pointer stores address of child class object
    p -> f1();      // runs f1 of class A if no virtual keyword is introduced. ; as it looks for the type of pointer i.e class A
// With VIRTUAL , this returns f1 of class B, as it looks for the address contained in pointer , which is of object of class B.
    return 0;
}
/* VIRTUAL FUNCTION WORKING CONCEP
           RULES
- Any class where atleast one virtual function exists, in that class the compiler declares the variable as the member in that class.
- It says that if any class contains atleast one virtual function then object created of that class must contains/exists vptr pointer.
- No separate vptr pointer for child class if one is already in parent class.
- Any class where atleast one virtual function exists, there must exists a vtable (static array) - which consists of pointers containing address of virtual functions.
- for descedent classes, separate individual vtable is there
- vtable: the static array, does not depend upon objects.
- vptr contains address of static array, if A class object is made, then vptr contains class A vtable address.


*/

