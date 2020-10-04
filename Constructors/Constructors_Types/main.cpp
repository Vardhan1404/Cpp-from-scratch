
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
      
// How to form a copy constructor - When object is formed and same class objet is passed in it as an argument, then copy constructor is formed.

    complex(complex &c)      // Copy constructor ( this c will again form objet c and recursion ocurs , considered error and thus to remove this , we introduce reference variable & )
    {  
        a=c.a;
        b=c.b;
    }   
   
};
int main()
{
    complex c1(6,9), c2=4, c3;
    complex c4=c1;          //if this happens, then no parameterized and default constructor is called, also no error.
   
     // there runs a copy constructor.    
    // if no constructor in class, then compiler forms two constructors - default n copy
   // if one constructor is formed in class, that too is normal constructor not a copy constructor then, compiler forms copy constructor only
  //  if we forms a copy constructor in class, then compiler forms no constructor at all.
    return 0;
}

/*


/*
When there is more than one version of constructor is present in the code , it is called Constructor Overloading.
Here , name of function is same but difference in terms of  arguments
*/

