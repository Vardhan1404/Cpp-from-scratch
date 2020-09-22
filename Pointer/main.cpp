#include<iostream>
using namespace std;
main()
{
int a=20;
int *ptr;
ptr=&a;
cout<<"value of a:"<<a<<endl;
cout<<"address of a:"<<&a<<endl;
cout<<"value of *ptr:"<<*ptr<<endl;//pointing to address of 'a' i.e gives value at a's adress
cout<<"value of *&a:"<<*(&a)<<endl;//* ptr is interpreteed as *&a
cout<<"value of ptr:"<<ptr<<endl;// ptr gives a's adress as it is initialised with a's adress
cout<<"address of ptr:"<<&ptr<<endl;//gives ptr adress
}
