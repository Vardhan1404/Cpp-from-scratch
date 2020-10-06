/*
Two types of operators:
- Binary: having 2 operands i.e +
- Unary: having just one operand (only caller object)

In binary operator, the left operand itself is caller object
*/




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
        a=x; b=y;
    }

    void showdata()
    {
        cout<<" a = "<<a<<" b = "<<b;
    }
    complex operator -()
   {
       complex temp;
       temp.a=-a;
       temp.b=-b;
       return temp;
   }
};
int main()
{
    complex c1,c2;
    c1.setdata(4,7);
    c2 = c1.operator-();     // also c2=-c1
    c2.showdata();
    return 0;
}
