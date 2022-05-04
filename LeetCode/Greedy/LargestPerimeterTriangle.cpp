#include <bits/stdc++.h>
using namespace std;
int largestPerimeter(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (nums[i] < nums[i + 1] + nums[i + 2])
        {
            return nums[i] + nums[i + 1] + nums[i + 2];
        }
    }
    return 0;
}
// Input: nums = [2,1,2]
// Output: 5