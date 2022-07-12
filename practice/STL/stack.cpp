#include <bits/stdc++.h>
#include<stack>
using namespace std;

void display(stack<int> &st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int> st;
    st.push(23);
    st.push(43);
    st.push(44);
    st.push(2);
    display(st);
    return (0);
}