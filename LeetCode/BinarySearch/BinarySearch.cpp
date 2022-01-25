#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            right = mid - 1;
        }
        else if (target > nums[mid])
        {
            left = mid + 1;
        }
    }
    return -1;
}
// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4