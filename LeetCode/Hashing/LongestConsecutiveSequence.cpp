#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    //     if(nums.size()==0 ){
    //         return 0;
    //     }
    //     sort(nums.begin(),nums.end());
    //     int ans=0;
    //     int count=1;
    //     for(int i=0;i<nums.size()-1;i++){
    //         if(nums[i]==nums[i+1]){
    //             continue;
    //         }
    //         if(nums[i]==nums[(i+1)]-1){
    //             count++;
    //             ans=max(ans,count);
    //         }
    //         else{
    //             count=1;
    //         }
    //     }
    //     ans=max(ans,count);
    //     return ans;
    if (nums.size() == 0)
    {
        return 0;
    }
    int ans = 0;
    unordered_map<int, pair<int, bool>> mp;
    for (auto i : nums)
    {
        mp[i].first++;
        mp[i].second = false;
    }
    for (auto i : nums)
    {
        if (mp[i].second == false && mp[i + 1].first == 0)
        {
            mp[i].second = true;
            int n = i;
            int count = 0;
            while (mp[n].first)
            {
                count++;
                n = n - 1;
            }
            ans = max(ans, count);
        }
    }
    return ans;
}
// Input: nums = [100,4,200,1,3,2]
// Output: 4;