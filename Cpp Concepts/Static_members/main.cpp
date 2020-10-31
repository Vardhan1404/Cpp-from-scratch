/*
Static members have 3 classifications :
- Static Local variables  // explanation at bottom
- Static Member Variables
- Static Member Functions


//  Static / class Member Variable  //

- Declared inside class body
- Must be defined outside the class

*/
#include<iostream>
using namespace std;

class account
{
private:
    int balance;                 // instance member variable : variable without static keyword inside class


    static float roi;    // static variable declaration          // static/class member variable

public:
    void setbalance(int b)       // instance member function

    {
        balance = b;
    }
// to access roi if declared inside private, we create function setroi: to send value in roi
   static void setroi(float r)     // can be made static member function by using static kkeyword
                                   // only access   static members and can be called w/o object
    {

        roi=r;
    }
};
// only by declaration of static member variable inside class, variable does not get memory
//  statement provides memory to static variable :
// datatype (class_name scope resolution), membership label  variable_name;
float account :: roi = 3.5f;           // value set to 3.5f

int main()
{
    account a1,a2;        // a1 is object of account class having 1 variable balance // roi will not be part of object
// account :: roi=4.5;    //If roi was declared inside public access specifier , here it is private : so we an't use this method.
    a1.setroi(4.5);
// to call static member function if no object is there, then
//   account :: setroi(4.5f);

    return 0;
}


/*
Static/class Member function
- Invoked with or w/o objects.
- only access static members of class.
*/





/*

// Static Local Variable //

- By default value is 0
- Lifetime is throughout the program

*/

/*



void fun()          // function declaration
{
    static int x;
// static local variable //   // 0 value

    int y;     // garbage value stored
}

*/
