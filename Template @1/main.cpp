/*   TEMPLATE
- Keyword "template" to define function template n class template.
- To make function or class generalize as far as datatype is concern.

TYPES :
1. Function template
- Also known as generic function
SYNTAX:
template<class type>
type func_name(type arg1, type arg2)

2. Class template

- If we have to do function overloading just for sake of different data-type, then we can create a generalize single version of
 function to avoid function overloading n that generalize version can run with any data type provided.


*/

#include<iostream>
#include<conio.h>
using namespace std;

/*int big(int a, int b)
{
    if (a>b)
        return (a);
    else
        return  (b);
}

double big(double a, double b)
{
    if (a>b)
        return (a);
    else
        return  (b);
}
*/

// To make function template/generic function//
template <class X>              // X is placeholder; any name irrespective of X can be given to it.
X big(X a, X b)
{
    if (a>b)
        return (a);
    else
        return  (b);
}

int main()
{
    cout<<big(4,5)<<endl;
    cout<<big(5.7,3.7); // data loss , since it is double type
    return 0;
}


/*
If we want to add more than one placeholder to add different types of values:

template <class X, class Y>
X big(X a, Y b)
{
    if (a>b)
        return (a);
    else
        return  (b);
}

int main()
{
    cout<<big(4,5.5)<<endl;
    cout<<big(4.7,4); // data loss , since it is double type
    return 0;
}

*/

