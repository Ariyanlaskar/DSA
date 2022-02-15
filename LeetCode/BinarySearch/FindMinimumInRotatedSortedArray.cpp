#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1;
    if (nums.size() == 2)
    {
        return min(nums[0], nums[1]);
    }
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid == nums.size() - 1)
        {
            return nums[0];
        }
        if (nums[mid] >= nums[start] && nums[mid] >= nums[end] && nums[mid + 1] < nums[mid])
        {
            return nums[mid + 1];
        }
        else if (nums[mid] < nums[start] && nums[mid] < nums[end])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
// Input: nums = [3,4,5,1,2]
// Output: 1