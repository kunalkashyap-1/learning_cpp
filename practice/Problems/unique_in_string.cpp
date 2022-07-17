#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int firstUniqChar(string s) {
    for(int j=0;j<s.length();j++){
        int cnt=0;
        for(int i=j+1;j<s.length();i++){
            char x=s.at(j);
            cnt = std::count(s.begin(),s.end(),x);
            if(cnt>1)
                break;
            else if(cnt=1)
                return j;
        }
    }
    return -1;
}
//OR
int unique(string s){
    unordered_map<char,int> hash;
    for(char x :s){
        int cnt= std::count(s.begin(),s.end(),x);
        hash.insert({x,cnt});
    }
    for (int i = 0; i < s.size(); i++)
    {
        if(hash[s[i]]==1){
            return i;
        }
    }
    
    return -1;
}
int main(){
    string s;
    s= "aab";
    cout<<firstUniqChar(s)<<" "<<endl;
    cout<<unique(s)<<" "<<endl;
}