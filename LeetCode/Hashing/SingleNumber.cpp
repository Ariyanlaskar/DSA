//LeetCode Easy 136;
#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
    int ans=-1;
    map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto it:mp){
        if(it.second==1){
            ans=it.first;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={4,1,2,1,2};
    cout<<singleNumber(nums)<<endl;
    return 0;
}