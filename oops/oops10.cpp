#include <iostream>
#include <fstream>
using namespace std;

int main()
{

string str0;
string str1;
string str2;

string str3;

ofstream ichigo("bleach.txt");

cout << "enter your first name " << endl; cin >> str0;

cout << "enter your last name " << endl; cin >> str1;

cout << "enter your age " << endl;

cin >> str2;

cout << "enter your occupation " << endl; cin >> str3;

ichigo << "Name:-" << str0 << " " << str1; ichigo << endl;

ichigo << "Age:-" << str2;

ichigo << endl;
ichigo << "Occupation:-" << str3;
ichigo.close();

string str4;
string str5;

string str6;

ifstream rukia("bleach.txt");

getline(rukia, str4);
 
getline(rukia, str5);

getline(rukia, str6);

cout << endl;

cout << str4 << endl;

cout << str5 << endl;

cout << str6 << endl;

rukia.close();
}
