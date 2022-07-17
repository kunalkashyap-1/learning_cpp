#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> nums, int k) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int arr[n],j=0;
    for (int i = 0; i < n-1; i++)
    {
        if(nums[i]!=nums[i+1]){
            arr[j++]=nums.at(i);
        }
    }
    arr[j]=nums[n-1];
    return arr[k-1];
}

int main(){
    vector<int> nums={3,2,3,1,2,5,5,6};
    int k=4;
    cout<<findKthLargest(nums,k)<<" "<<endl;
}