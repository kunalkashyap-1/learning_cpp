#include <bits/stdc++.h>
using namespace std;

void display(deque<int> &dq){
    for(auto x: dq){
        cout<<x<<" ";
    }
    cout<<endl;
}


int main()
{
    deque<int> dq(10);
    for (int i = 0; i < 10; i++)
    {
        dq[i]=i*i;
    }
    display(dq);
    cout<<"size "<<dq.size()<<endl;
    dq.push_back(20);
    dq.push_front(13);
    display(dq);
    cout<<"size "<<dq.size()<<endl;
    return (0);
}