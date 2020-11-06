/* FILE HANDLING IN C++

- Data Persistence - Life of Data
  Life span of a variable is not more than a program.
- To store data permanently in file.
- If we want to persist data more than the span of program, then we introduce file handling.

  STREAMS
- To transfer data from variable to file is called output stream.
- Data is coming from file to the variable is called input stream.

To represent streams, we have objects and then , we have class also, i.e Predefined classes
istream                                   ostream
ifstream (child class)                    ofstream (child class)    fstream (combination of both ifstream and ofstream)

To write into file - ofstream obj
To read from a file - ifstream obj

cin : object of istream_withassign class and also access members of parent class "istream"
cout : object of ostream_withassign class and can also access members of parent class "ostream"

*/
#include<fstream>
#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    ofstream fout;
    fout.open("myfile.dat");              // open is a member function of ofstream
    fout<<"Hello";
    fout.close();
    return 0;
}
