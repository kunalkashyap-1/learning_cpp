#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
   list<int> :: iterator it;
   for (it=lst.begin(); it!=lst.end(); it++)
   {
    cout<<*it<<" ";
   }
   
}

int main(){
    list<int> list1;//list of zero length
    list<int> list2(7);//empty list of size 7
    list1.push_back(6);
    list1.push_back(5);
    list1.push_back(33);
    list1.push_back(21); 
    list1.push_back(12);
    
    list<int> :: iterator iter;
    iter=list1.begin();
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
    list1.push_front(22);
    iter--;
    iter--;
    cout<<*iter<<endl;
    display(list1);

    cout<<endl;
    list1.pop_back();
    display(list1);
    cout<<endl;

    list1.remove(5);
    display(list1);
    cout<<endl;

    list1.sort();
    display(list1);
    
    return (0);
}