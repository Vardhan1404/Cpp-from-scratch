#include<iostream>
#include<conio.h>
using namespace std;
struct book
{
private:   // access specifier : no one outside structure can access these variables
    int bookid;
    char title[20];
    float price;
public:     // here onwards structure variables can be accessed from outside of structure body
    void input()
    {
        cout<<"Enter bookid, title , price of book: "<<endl;
        cin>>bookid>>title>>price;

    }
    void display()
    {
        cout<<"\n"<<bookid<<" "<<title<<" "<<price;
    }
};
int main()
{

book b1;
b1.input();
b1.display();
}
