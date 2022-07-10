#include<bits/stdc++.h>
#include<fstream>
using namespace std;


int main(){
    ofstream out("sample.txt");
    cout<<"enter your name ";
    string name;
    cin>>name;
    out<<"my name is " + name;
    out.close();

    ifstream in("sample.txt");
    string contant;
    getline(in,contant);
    cout<<"the contants of this file is " + contant;
    in.close();
return (0);
}