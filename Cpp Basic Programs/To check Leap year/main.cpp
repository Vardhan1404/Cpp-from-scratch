/*
LEAP year possibilities:

year % 4==0
century year % 400==0

*/

#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Enter year: "<<endl;
    cin>>year;

    if(year%400==0 || year%100!=0 && year%4==0)
        cout<<"It is a LEAP year ! "<<endl;
    else
        cout<<"No LEAP year "<<endl;
    return 0;
}
