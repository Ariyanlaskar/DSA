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
int main(){
    vector<int>nums = {2,3,1,1,4};
    cout<<canJump(nums)<<endl;

    return 0;
}