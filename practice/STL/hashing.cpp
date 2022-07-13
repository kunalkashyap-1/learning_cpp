#include <bits/stdc++.h>
#include<unordered_map>
#include<string>
using namespace std;



int main()
{
    //instert values 
    unordered_map<string,int> menu;
    menu["maggi"]=15;
    menu["momo"]=40;
    menu["cold_drink"]=45;
    menu["dosa"]=50;
    //update query 
    menu["dosa"]=(1+0.1)*menu["dosa"];

    //deletion in hash table
    menu.erase("dosa");
//searching inside collection of key value pairs 
    string item;
    cin>>item;
    if(menu.count(item)==0){
        cout<<"this item is not available"<<endl;
    }
    else{
        cout<<item<<" is available, and cost is "<<menu[item]<<endl;
    }

    for(/*auto*/pair<string,int> item: menu){
        cout<<item.first<<" "<<item.second<<endl;
    }
    return (0);
}