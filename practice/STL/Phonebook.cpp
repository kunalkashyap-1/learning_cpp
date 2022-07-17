#include <bits/stdc++.h>
#include <map>
#include <string>
#include <list>
using namespace std;

void display(map<string, list<string>> &phonebook)
{
    // map<string,list<string>>:: iterator iter;
    for (pair<string, list<string>> iter : phonebook)
    {
        cout << iter.first << "\t";
        for (string x : iter.second)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main()
{
    map<string, list<string>> phonebook;
    phonebook["ichigo"].push_back("4652883");
    phonebook["ichigo"].push_back("46545135");

    phonebook["rukia"].push_back("2288526");
    phonebook["rukia"].push_back("87956532");
    display(phonebook);
    // to find an element
    string key;
    cin >> key;
    if (phonebook.find(key) != phonebook.end())
        cout << "true";
    else
        cout << "false";
    return (0);
}