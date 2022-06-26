#include<iostream>
#include<string>

using namespace std;

class binary{
    string s;
    public:
        void read();
        void chk_bin();
};

void binary :: read(){
    cout<<"enter a binary no.";
    cin>>s;
}
 
void binary :: chk_bin(){
    read();
    for (int i=0; i<s.length(); i++){
        if (s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary format";
            exit(0);
        }
    }
} 

int main(){
    binary b;
    //b.read();
    b.chk_bin();
    return(0);
}