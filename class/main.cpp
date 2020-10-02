
/*
Difference between class n structure is :
- members of structure by default are public
- members of class are by default private.

- new concept, no backward compatability
*/


/*
- class ; description of object
- object ; instance of class

*/

#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
private:

    int a,b;                 // a ,b are instance or object member variable
                             // attributes, data members, fields, properties
public:

    void set_data(int x, int y)       // set_data ,show_data , add  are instance member function
                                      // methods, procedures, actions, operations, services
    {
        a=x; b=y;
    }

    void show_data()

    {
        cout<<" a= "<< a <<" b= "<< b;
    }


    complex add(complex c)

    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return (temp);
    }
};

// object state : collection of values of its instance member variables
// object behavior : instance member functions

int main()

{
    complex c1,c2,c3;      //  c1,c2,c3 are object
    c1.set_data(3,4);
    c2.set_data(4,7);
// c1 caller func , c3 argument of add function
    c3 = c1.add(c2);
//c3 = c1+c2, this is incorrect, non primitive type data type i.e complex :: can be enabled using operator overloading
    c3.show_data();
    return 0;
}





/*

- function defined inside class by default inline
- if function is defined outside, and to be made inline , add inline keyword during function declaration



class complex                        // keyword class in place of struct
{
    private:                        // even by default also private ; no any need to write private
    int a,b;

public:
    void set_data(int x, int y)        // if func defined outside, then  void set_data(int , int)

    {
        a=x; b=y;
    }

    void show_data()

    {
        cout<<" a= "<< a <<" b= "<< b;
    }
};


- member function can be defined outside class body ;

// void complex:: set_data(int x, int y)
   { a = x; b=y; }
// membership label i.e class_name scope resolution operator " :: "


int main()
{
    complex c1;              //  c1 is object here not variable // c1 consumes memory
    c1.set_data(3,4);       // noun.verb
    c1.show_data();
}
*/
