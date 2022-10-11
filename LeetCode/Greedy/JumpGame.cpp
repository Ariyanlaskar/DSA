#include<bits/stdc++.h>
using namespace std;
bool canJump(vector<int>& nums) {
    if(nums.size()==1){
        return true;
    }
    int n=nums.size()-1;
    int curr=0;
    for(int i=0;i<=n;i++){
        curr=max(curr,i+nums[i]);
        if(curr==i){
            return false;
        }
        else{
            if(curr>=n){
                return true;
            }
        }
    }
    return true;
}

// Input: nums = [1,2,3,4,5]
// Output: true