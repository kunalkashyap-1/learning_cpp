#include <bits/stdc++.h>
#include <queue>
using namespace std;

void display(priority_queue<int> &q){
   while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

void display(priority_queue<int,vector<int>, greater<int>> &q){
   while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    int arr[]={11,62,54,87,3,7,2};
    priority_queue<int> heap;//by default it makes a max heap
    priority_queue<int,vector<int>, greater<int>> minheap;
    for(int x: arr){
        heap.push(x);
    }
    display(heap);
    for(int x: arr){
        minheap.push(x);
    }
    display(minheap);
    return (0);
}