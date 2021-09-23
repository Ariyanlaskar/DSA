#include<bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int>&nums) {
    vector<int>dp(nums.size(),1);

    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(nums[i]>nums[j])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int ans=0;
    for(int i=0;i<nums.size();i++)
        ans = max(ans,dp[i]);
    return ans;
}
int main(){
    vector<int>nums={1,3,6,7,9,4,10,5,6};
    cout<<lengthOfLIS(nums);
    return 0;
}