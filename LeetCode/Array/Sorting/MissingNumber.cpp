#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (i != nums[i])
        {
            return i;
        }
    }
    return n;
}
// Input: nums = [3,0,1]
// Output: 2