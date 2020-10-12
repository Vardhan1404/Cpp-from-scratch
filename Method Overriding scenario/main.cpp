/* METHOD = FUNCTION
- While constructing child class, if we want to change the implementation of a service from parent class, thus use Method/Function Overriding.

*/

#include<iostream>
#include<conio.h>
using namespace std;

class car
{
    public:
        void shiftgear() {  }
        void f2() {  }
};
class sportscar:public car
{
public:

    void shiftgear() {  }        // Method Overriding
    void f2(int x) {  }         // Method Hiding
};
int main()
{
   sportscar obj;
   obj.shiftgear();     // sportscar
//obj.gear_change();   // sportscar
//obj.f2();  // gives error since arguments not match
   obj.f2(5); // B class f2 will run.

}
