#include<iostream>
#include<map>
#include<string>

//map is an associative array
using namespace std;


int main(){
    map<string, int> marksmap;
    marksmap["someone"]=78;
    marksmap["someone2"]=87;
    marksmap["someone3"]=98;
    map<string,int>::iterator iter;
    for (iter=marksmap.begin(); iter!=marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
        
    return (0);
}