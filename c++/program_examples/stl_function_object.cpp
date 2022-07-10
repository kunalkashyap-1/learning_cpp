#include<bits/stdc++.h>
#include<functional>

using namespace std;


int main(){
    //function object(functor): function wrapped in a class so that it is available like an object
    int arr[]={1,2,4,6,5,8,7,0,9};
    sort(arr,arr+9);    
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return (0);
}