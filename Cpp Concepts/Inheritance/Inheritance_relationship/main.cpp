/*   Is-a Relationship
- Only for Inheritance
- Banana is a fruit :- Generalised (big category)) - Fruit ; Specific - Banana
- Earlier class is a child class , later one is Parent class.
- Rectangle is a quadrilateral :- rectangle (child), quadrilateral (parent)
- Only implemented with public inheritance;
*/



#include<conio.h>
#include<iostream>
// when private or protected inheritance in play
class array
{
private:
    int a[10];
public:
    void insert(int index, int value)
    {
        a[index]= value;
    }
};
// when used public inheritance , it violates the stack properties
class stack: private array        // when we donot want public services of parent class in child class, then we use private or protected inheritance
{
    int top;
public:
    void push(int value)
    {
        insert(top, value);
    }
};
int main()
{
    stack s1;
    s1.push(34);
    //s1.insert(2,56);  // this will give error since insert function under private inheritance has now become private member thus object cannot access it
// push function can call this, child class can access but not object of child class can access it.
}


























// WHY PUBLIC INHERITANCE ??
/*using namespace std;
class car
{
private:
    int gear;
public:
    void incrementgear()
    {
        if(gear<5)
            gear++;
    }
};
class sportscar:public car        //public is used here to avail parent class public services
{

}; */
