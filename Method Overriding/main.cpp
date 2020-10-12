/* METHOD = FUNCTION
1. Method Overloading - Functions have same name but difference in arguments but only within a class.
2. Method Overriding - If we have( function name is same ) two same functions in parent n child class with only difference in their coding.
3. Method Hiding - If we have ( function name is same )two same functions in parent n child class with difference in their arguments.



*/

#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    public:
        void f1() {  }
        void f2() {  }
};
class B:public A
{
public:
    void f1() {  }        // Method Overriding
    void f2(int x) {  }   // Method Hiding
};
int main()
{
   B obj;
// Early binding : compiler to decide which f1 to run.
   obj.f1();   // B class f1 will run
   //obj.f2();  // gives error since arguments not match
   obj.f2(5); // B class f2 will run

}
