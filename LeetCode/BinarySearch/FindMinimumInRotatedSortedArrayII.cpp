#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &nums)
{
    int n = nums.size();
    int left = 0, right = n - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] > nums[right])
        {
            left = mid + 1;
        }
        else if (nums[mid] == nums[right])
        {
            right--;
        }
        else
        {
            right = mid;
            ;
        }
    }
    return nums[left];
}
// Input: nums = [2,2,2,0,1]
// Output: 0
