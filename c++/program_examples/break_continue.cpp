#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //break stops the current itteration , and gets out of the loop
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue;
            //continue stops the current itteration and jumps on to the next one
        }
        cout<<i<<endl;
    }
    return(0);
}