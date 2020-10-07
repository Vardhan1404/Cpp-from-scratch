/*
- Friend function can become friend to more than one class.
- Can be declared at private or public; no effect since it is not a member function.

*/








#include <iostream>
#include<conio.h>
using namespace std;

class B; // forward declaration of class B
class A
{
private:
    int a;
public:
    void setdata(int x)
    {
        a=x;
    }
    friend void fun(A,B);
};
class B
{
private:
    int b;
public:
    friend void fun(A,B);
    void setdata(int y)
                 {
                     b=y;  }

};
void fun(A o1, B o2)
{
    cout<<"sum is "<<o1.a + o2.b;   // this if you want to access private data of more than one class, friend function in use

}
int main()
{
    A obj1;
    B obj2;
    obj1.setdata(4);
    obj2.setdata(6);
    fun(obj1,obj2);
    return 0;

}
