#include <bits/stdc++.h>
using namespace std;
int splitArray(vector<int> &nums, int m)
{
    int low = 0;
    int high = 0;
    int ans = 0;
    for (auto i : nums)
    {
        high += i;
    }
    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (isPossible(nums, m, mid))
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
bool isPossible(vector<int> &nums, int m, int mid)
{
    int CurrSum = 0;
    int count = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (CurrSum + nums[i] > mid)
        {
            count++;
            CurrSum = nums[i];
            if (count > m || CurrSum > mid)
            {
                return false;
            }
        }
        else
        {
            CurrSum += nums[i];
        }
    }
    return true;
}
// Input: nums = [7,2,5,10,8], m = 2
// Output: 18

