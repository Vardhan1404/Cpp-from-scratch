#include <iostream>
#include<conio.h>
using namespace std;
int area(int, int);
float area(int);

int main()
{
    int r;
    cout << "Enter radius of circle" << endl;
    cin>>r;
    float A = area(r);
    cout<<"Area of circle is "<<A<<endl;
    int l,b,a;
    cout<<"Enter length n breadth of rectangle" <<endl;
    cin>>l>>b;
    a=area(l,b);
    cout<<"Area of rectangle is "<<a<<endl;
}
float area(int r)
{
    return(3.14*r*r);
}
int area(int l,int b)
{
    return(l*b);
}

