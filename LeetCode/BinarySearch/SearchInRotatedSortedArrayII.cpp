#include <bits/stdc++.h>
using namespace std;
int findPivot(vector<int> nums)
{
    int n = nums.size();
    int l = 0, r = n - 1;
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
    int n = nums.size();
    int pivot = findPivot(nums);
    int l, r;
    while (pivot > 0 && nums[pivot - 1] <= nums[pivot])
    {
        pivot--;
    }
    if (nums[pivot] <= target && nums[n - 1] >= target)
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