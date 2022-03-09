#include <bits/stdc++.h>
using namespace std;
int kadane(vector<int> &nums)
{
    int currSum = nums[0];
    int maxx = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        currSum += nums[i];
        if (currSum < nums[i])
        {
            currSum = nums[i];
        }
        maxx = max(currSum, maxx);
    }
    return maxx;
}
int maxSubarraySumCircular(vector<int> &nums)
{
    int a = kadane(nums), b = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        b += nums[i];
        nums[i] *= -1;
    }
    int c = kadane(nums);

    if (b + c == 0)
    {
        return a;
    }
    return max(a, b + c);
}
Input: nums = [1,-2,3,-2]
Output: 3