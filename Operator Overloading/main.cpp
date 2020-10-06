/*
- When operator is overloaded w multiple jobs, is "operator overloading"
- Way to implement compile time polymorphism.
- Operator overloading is done because the existing operators only work on the primitive operands( int, float , etc),
- for an operator to work on non primitive operands, we create a function to overload an operator by typing the keyword 'operator' before it.
- We can only overload the already existing operators of cpp.
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
    complex operator +(complex c)     // new way of writing add operator
    //complex add(complex c)          // existing method of writing add function
   {
       complex temp;
       temp.a=a+c.a;
       temp.b=b+c.b;
       return temp;
   }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(4,7);
    c2.setdata(9,5);
    /* c3=c1+c2 without operator overloading is incorrect, after overloading + operator we can use  */
    c3 = c1+c2;     // also c3=c1.operator+(c2)
    //c3=c1.add(c2);   // if not overloaded
    c3.showdata();
    return 0;
}
