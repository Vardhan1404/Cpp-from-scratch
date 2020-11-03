#include <iostream>
#include<conio.h>
using namespace std;

class integer
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
        cout<<" x = "<< x<<endl;
    }

    integer operator --()              // Pre decrement function
    {
        integer i;
        i.x=--x;
        return (i);
    }

    integer operator--(int)           // Post Decrement Function
    {
        integer i;
        i.x=x--;
        return (i);
    }


};

int main()
{
    integer i1,i2;
    i1.setdata(8);
    i1.showdata();
    //i2=--i1;        // Pre decrement declaration
    i2=i1--;          // Post decrement declaration
    i1.showdata();
    i2.showdata();
    return 0;
}
