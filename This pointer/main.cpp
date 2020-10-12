/* OBJECT POINTER
- Pointer contains address of an object.

THIS POINTER
- this is a keyword.
- this is a Local object pointer in every instance member function contain
address of caller object
- this pointer value can't be changed
- solves name conflict problem
*/

#include <iostream>
#include<conio.h>
using namespace std;

class Box
{
private:
    int l,b,h;        // instance member variable

public:
    void set_dimen(int l, int b, int h)           // l,b,h : local variable
 // void set_dimen(int x, int y, int z)          // Instance member function
// l=l; b=b; h=h;  -this gives error, to avoid thus, we use "this" pointer

    { this->l=l; this->b=b; this->h=h;}       // name conflict resolves  // assignment left side are to be instance member variable
 // { l=x; b=y; h=z;}


    void show_dimen()                     // Instance member function
    { cout<<" l = "<<l<<endl<<" b = "<<b<<endl<<" h = "<<h; }
};

int main()
{
   Box *p,sbox;    // *p = pointer variable of box type
   p=&sbox;
   p->set_dimen(12,10,6);  // or  sbox.set_dimen(12,10,6);
   p->show_dimen();       //  or sbox.show_dimen();
   return 0;
}
