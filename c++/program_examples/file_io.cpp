#include<bits/stdc++.h>
//#include<fstream>
using namespace std;

//the usefull classes for working with files in c++ are :-
//1.fstreambase-->base class
//2.ifstream-->derived from fstreambase
//3.ofstream-->        ""

/* in order to work with files in c++, first of all you'll have to open it.primarily, there are 2 ways to open a file:
1.using the constructor 
2.using the member function open() of the class.
*/

int main(){
    string st="something for example";
    string st2;
    //opening file using constructor and writing it
    // ofstream out("sample.txt");//write operation
    // out<<st;
    //opening file using constructor and reading from it
    ifstream in("sample.txt");
    //in>>st2;
    getline(in,st2);
    cout<<st2;
return (0);
}