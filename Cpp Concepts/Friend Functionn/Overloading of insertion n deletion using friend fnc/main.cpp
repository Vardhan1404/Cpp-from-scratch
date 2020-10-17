/* Overloading of Insertion and Extraction operator using Friend function

- We have to overload these two operators in Friend function only.
- If we declare them in member function of complex class, then caller object
has to be from complex class only and then caller object will be cout or cin as left operand.

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
        a=x;
        b=y;
    }

    void showdata()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl; }

    friend ostream& operator<<(ostream&, complex);       // declaration of friend function to access private func of complex class
/* No object created for ostream class, thus reference for ostream class,*/

    friend istream& operator>>(istream&, complex&);    //
/* Reference for complex type also, bcz changes to be done in actual argument also*/
};

ostream& operator<<(ostream &dout, complex c )
{
    cout<<"a = "<<c.a<< " b = "<< c.b;
    return (dout);  // dout contains reference of cout, thus returns(cout) for cascading
}
istream& operator>>(istream &din,complex &c)
{
    cin>>c.a>>c.b;
    return(cin); // din returns(cin)

}
int main()
{
   complex c1;
   cout<<"Enter a complex number :";
   cin>>c1;  // or cin.operator>>(c1)
   cout<<"You entered : ";
   cout<<c1;   // operator<<(cout,c1) in terms of friend function only
   return 0;
}
