#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    // sort(nums.begin(),nums.end());
    // for(int i=0;i<nums.size()-1;i++){
    //     if(nums[i]==nums[i+1]){
    //         return nums[i];
    //         break;
    //     }
    // }
    // return -1;
    // map<int,int>mp;
    // for(int i=0;i<nums.size();i++){
    //     if(mp[nums[i]]!=0){
    //         return nums[i];
    //         break;
    //     }
    //     mp[nums[i]]++;
    // }
    // return -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[abs(nums[i])] < 0)
        {
            return abs(nums[i]);
        }
        nums[abs(nums[i])] = -nums[abs(nums[i])];
    }
    return 0;
}