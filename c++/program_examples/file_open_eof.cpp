#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "this is me \n";
    out << "hello me again ";
    out.close();

    ifstream in;
    in.open("sample.txt");
    string st;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    getline(in, st);
    cout << st;
    return (0);
}