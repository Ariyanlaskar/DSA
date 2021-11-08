#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int> &nums, int target)
{
    int n = nums.size();
    int minAbsVal = INT_MAX;
    int ans = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i <= n - 3; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            if (abs(nums[i] + nums[l] + nums[r] - target) < minAbsVal)
            {
                minAbsVal = abs(nums[i] + nums[l] + nums[r] - target);
                ans = nums[i] + nums[l] + nums[r];
            }
            if (nums[i] + nums[l] + nums[r] < target)
            {
                l++;
            }
            else if (nums[i] + nums[l] + nums[r] > target)
            {
                r--;
            }
            else if (nums[i] + nums[l] + nums[r] == target)
            {
                return nums[i] + nums[l] + nums[r];
            }
        }
    }
    return ans;
}
int main()
{
    vector<int>nums = {-1,2,1,-4};
    int target = 1;
    cout<<threeSumClosest(nums,target);
    return 0;
}
//OutPut : 2;