#include <bits/stdc++.h>
#include<queue>
using namespace std;

void dispaly(queue<int> &q){
    for (int i = 0; i < q.size(); i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    queue<int> q;
    q.push(12);
    q.push(1);
    q.push(72);
    q.push(7);
    q.push(92);
    dispaly(q);
    sort(q.front(),q.back());
    return (0);
}