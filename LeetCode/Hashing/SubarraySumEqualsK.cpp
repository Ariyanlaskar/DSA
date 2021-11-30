#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int> &nums, int k)
{
    int Tsum = 0, ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[Tsum]++;
        Tsum += nums[i];
        if (mp[Tsum - k] != 0)
        {
            ans += mp[Tsum - k];
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1,1,1};
    int k = 2;
    cout<<subarraySum(nums,k)<<endl;
    return 0;
}
// Input: nums = [1,1,1], k = 2
// Output: 2