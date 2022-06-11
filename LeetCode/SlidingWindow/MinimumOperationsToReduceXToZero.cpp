#include <bits/stdc++.h>
using namespace std;
int minOperations(vector<int> &nums, int x)
{
    int n = nums.size();
    int sum = 0;
    for (auto i : nums)
    {
        sum += i;
    }
    int ans = -1;
    int count = nums[0];
    int left = 0, right = 0;
    int target = sum - x;
    while (left < n && right < n)
    {
        if (count < target)
        {
            right++;
            if (right == n)
            {
                break;
            }
            count += nums[right];
        }
        if (count > target)
        {
            count -= nums[left];
            left++;
        }
        if (count == target)
        {
            ans = max(ans, right - left + 1);
            right++;
            if (right == n)
            {
                break;
            }
            count += nums[right];
        }
    }
    if (ans == -1)
    {
        return -1;
    }
    return n - ans;
}
// Input: nums = [1,1,4,2,3], x = 5
// Output: 2