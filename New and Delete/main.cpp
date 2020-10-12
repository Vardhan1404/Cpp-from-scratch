/* NEW  and Delete

SMA - Static Memory Allocation \ Compile Time Memory Allocation
int x;
float y;
complex c1;
student s;
// no change in memory during execution
// memory is allocted when program starts to run.
// no change in life span, everything is fixed.

DMA - Dynamic Memory Allocation  \ Run time // flexibility of memory allocation

** new ** // dma

1. int *p = new int;
2. float *q = new float;
3. complex *ptr = new complex;
4. array | float *q = new float[5];

** delete ** // dma variables  :  to release memory which is made up of new

1. delete p;     // doesnot deletes p but it delete to which p points.
2. delete []p;   // array

*/
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int*p=new int[x];

    return 0;
}
