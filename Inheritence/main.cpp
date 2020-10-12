/* Need of Inheritance

- Inheritance is process of inheriting properties and behaviours of existing class
into a new class.
- Existing class = Old = Parent = Base class
- New class = Child = Derived class.

Syntax:

class Base_Class
{ };

class Derived_class : Visibility_Mode Base_Class
{ };
// visibility_mode = access specifir


TYPES of INHERITANCE -

1. Single Level Inheritance ( One parent and One child class )
class A       // Base class
{  };
class B:public A     // Derived class // by default - private
{  };

2. Multilevel Inheritance ( More than 1 levels )
class A              // Base class
{    };
class B:public A     // Derived class from A
{  };
class C:public B     // Derived class from B
{  };                // class C contains all properties of class A and B


3. Multiple Inheritance ( More than 1 parent class separated by comaa )
class A1
{  };
class A2
{  };
class B:public A1,public A2
{  };

4. Hierarchical Inheritance ( One parent class can have more than 1 child class )
class A
{  };
class B1:public A
{  };
class B2:public A
{  };

5. Hybrid Inheritance ( combination of any 2 inheritances)

VISIBILITY MODES : access specifiers
1. PRIVATE
2. PROTECTED
3. PUBLIC
Types of users:
User 1: Will create object of class
User 2 : Will derived class from the class

Private members are available to both, but accessible by none.
Protected members are available to both, but accessed by user 2 but not user 1.
Public members are available and accessible by both users

Visibility Modes:
1. Private: All protected/public members of class A will become Private members in B.
2. Protected: All protected/public members of class A will become Protected members in B.
3. Public: All protected & public members of class A will become Protected and Public members of class B respectively.

*/

#include<iostream>
#include<conio.h>
using namespace std;

class A           // base class
{
    private:
        int a;
    protected:
        void setvalue(int k)
        {
            a=k;
        }
};
class B:public A        // derived class
{
public:
    void setdata(int x)
    {
        setvalue(x);        // protected in derived class B also
    }
};
int  main()
{
    B obj;
  //  obj.setvalue(5)    // produces error since setvalue is protected member in class B also, and protected member can not be accessed by user 1 i.e which creates object.
    obj.setdata(6);      // puts value into x , and then to setvalue , setvalue to k , k to a.
    return 0;
}
