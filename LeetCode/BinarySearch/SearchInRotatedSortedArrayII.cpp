#include <bits/stdc++.h>
using namespace std;
int findPivot(vector<int> nums)
{
    int l = 0, r = nums.size() - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (nums[0] <= nums[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    return l;
}
bool search(vector<int> &nums, int target)
{
    int l, r;
    int n = nums.size();
    int pivot = findPivot(nums);
    while (pivot > 0 && nums[pivot - 1] <= nums[pivot])
    {
        pivot--;
    }
    if (nums[pivot] <= target && target <= nums[n - 1])
    {
        l = pivot;
        r = n - 1;
    }
    else
    {
        l = 0;
        r = pivot - 1;
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            return true;
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return false;
}
// Input: nums = [2,5,6,0,0,1,2], target = 0
// Output: true