// If we want to overload binary operator as member function; then pass only one argument.
// but when overload it as friend func; then the earlier caller operand is now also passed as argument. therefore , pass two arguments.

// in Unary operator, we passed no argument in overloading as member function
// but in friend func, caller object has to become argument, thus one argument to be passed.


// Overloading of unary operator as a friend function


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
friend complex operator -(complex);

};
complex operator -(complex X)
{
    complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return(temp);
}
int main()
{
    complex c1,c2;   // objects formation
    c1.setdata(5,8);
    c2 = -c1;     // c2=operator-(c1)
    c1.showdata();
    c2.showdata();
    return 0;
}
