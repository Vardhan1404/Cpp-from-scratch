/* PURE VIRTUAL function

- A function having no definiton, do nothing function is called pure virtual function.
- There will be NO OBJECT created for classes having pure virtual function.
- We have to do mandatory inheritance of class having do nothing function
  and then in child class , to prevent call of parent class do nothing func,
  we do function overloading in child class.
- By making do nothing function virtual, we initiated "late binding" of the function,


-- ABSTRACT CLASS IN C++

- The class in which there exists atleast one pure virtual function. and have no object.
- Class can only be used by creating its child class.

-- IMPORTANCE OF ABSTRACT CLASS

- For generalization.
- To provide common features of abstract class into child classes.

*/

#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
public:
    // Pure virtual func / do nothing function
    virtual void fun()=0;             // syntax for do nothing function    // Member function
   // by adding ; means that function fun is declared here

    void f1()
    {  cout<<"\nAnother function of abstract class Person :\n";   }
};

// Function overriding should be done here in child class to stop call of do nothing function.
class student:public Person
{
  public:
      void fun()
      {
       cout<<"\nFun function of child class :";
      }
};
int main()
{
    // No object for abstract class Person can be created.
    student s1;
    s1.fun();
    s1.f1();
    return 0;
}
