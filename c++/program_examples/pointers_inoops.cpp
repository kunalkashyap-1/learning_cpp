#include<bits/stdc++.h>
using namespace std;



int main(){
    //basic example
    int a=4;
    int* ptr=&a;
    cout<<"the value of a is"<<*(ptr)<<endl;

    //new keyword
    int*p=new int(40);
    cout<<"the value of address p is "<<*(p)<<endl;

    int *arr= new int[4];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
//    delete[] arr;
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<endl;
    }

    
return (0);
}