#include <bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int s = nums.size() - k;
    return nums[s];
}
// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5