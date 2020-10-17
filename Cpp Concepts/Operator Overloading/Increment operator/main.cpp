/*  INCREMENT OPERATOR OVERLOADING ++
- Pre ++x
- Post x++

*/

#include<iostream>
#include<conio.h>
using namespace std;

class Integer
{
private:
    int x;

    public:
    void setdata(int a)
    {
        x = a;
    }

    void showdata()
    {
    cout<<" x = "<<x<<endl;
    }

    Integer operator++()               // Pre increment function
    {
        Integer i;
        i.x=++x;
        return(i);
    }

    Integer operator++(int)          // Post increment function
    // only difference is to pass int argument in post increment just to differentiate btw pre and post increment functions.
    {
        Integer i;
        i.x=x++;
         return(i);
    }
};

int main()
{
    Integer I1,I2;        // Integer class Object
    I1.setdata(3);
    I1.showdata();
    I2=I1++;             // also I2=I1.operator++();      // Post increment
    //I2=++I1;            // Pre increment
    I1.showdata();
    I2.showdata();
    return 0 ;
}
