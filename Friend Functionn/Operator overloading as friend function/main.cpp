// If we want to overload binary operator as member function; then pass only one argument.
// but when overload it as friend func; then the earlier caller operand is now also passed as argument. therefore , pass two arguments.

// in Unary operator, we passed no argument in overloading as member function
// but in friend func, caller object has to become argument, thus one argument to be passed.

#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
private:
    int a,b;

public:
    void setdata(int x, int y)
    {
        a=x;
        b=y;
    }

    void showdata()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl; }

 friend complex operator+(complex, complex);       // friend func declared
};

complex operator +(complex X, complex Y)           // friend func defined
 {
     complex temp;
     temp.a=X.a+Y.a;
     temp.b=X.b+Y.b;
     return(temp);
 }


int main()
{
    complex c1,c2,c3;
    c1.setdata(4,5);
    c2.setdata(3,6);
    c3=c1+c2;             // c3=operator+(c1,c2)
    c3.showdata();
    return 0;
}
