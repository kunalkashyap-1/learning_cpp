#include<bits/stdc++.h>
using namespace std;

//destructor never takes an argument nor does it return any vlaue
int count=0;
class Num
{
private:
    
public:
    Num(){
        count++;
        cout<<"this is the time when constuctor is called for object number "<<count<<endl;
    }
    ~Num(){
        cout<<"this is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};

int main(){  
    cout<<"we are inside our main function "<<endl;
    cout<<"creating first object n1"<<endl;
    Num n1;{
        count<<"creating two more objects "<<endl;
        Num n2,n3;
        cout<<"exiting this block";
    }
    cout<<"back to main"<<endl;
return (0);
}