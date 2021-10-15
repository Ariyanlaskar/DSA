//Leetcode Easy 674;
#include<bits/stdc++.h>
using namespace std;
int findLengthOfLCIS(vector<int>& nums) {
    int lcs=0;
    int ans=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]>nums[i-1]){
            ans++;
            lcs=max(lcs,ans);    
        }
        else{
            ans=0;
        }
    }
    return lcs+1;
}
int main(){
    vector<int>nums={1,3,5,4,7};
    cout<<findLengthOfLCIS(nums)<<endl;
    return 0;
}