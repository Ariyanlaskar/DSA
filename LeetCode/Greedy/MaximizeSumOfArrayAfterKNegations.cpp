#include <bits/stdc++.h>
using namespace std;
int largestSumAfterKNegations(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (k == 0)
        {
            break;
        }
        else if (nums[i] < 0)
        {
            k--;
            nums[i] = -nums[i];
        }
    }
    sort(nums.begin(), nums.end());
    int n = nums[0];
    while (k > 0)
    {
        nums[0] = -nums[0];
        k--;
    }
    for (auto i : nums)
    {
        sum += i;
    }
    return sum;
}