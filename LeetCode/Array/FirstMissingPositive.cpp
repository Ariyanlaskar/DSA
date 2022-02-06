#include <bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int> &nums)
{
    int n = nums.size();
    bool one = false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            one = true;
        }
        if (nums[i] <= 0 || nums[i] > n)
        {
            nums[i] = 1;
        }
    }
    if (!one)
    {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        int idx = abs(nums[i]);
        if (nums[idx - 1] > 0)
        {
            nums[idx - 1] = -nums[idx - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            return i + 1;
        }
    }
    return n + 1;
}
// Input: nums = [1,2,0]
// Output: 3