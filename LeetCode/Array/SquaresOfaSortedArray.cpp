//LeetCode Easy 977;
#include <bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n);
    int l = 0;
    int r = nums.size() - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (abs(nums[l]) >= nums[r])
        {
            ans[i] = nums[l] * nums[l];
            l++;
        }
        else
        {
            ans[i] = nums[r] * nums[r];
            r--;
        }
    }
    return ans;
}
// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].