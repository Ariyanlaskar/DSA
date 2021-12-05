#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum1 = target - (nums[i] + nums[j]);
            int left = j + 1;
            int right = n - 1;
            while (left < right)
            {
                int sum2 = nums[left] + nums[right];
                if (sum2 < sum1)
                {
                    left++;
                }
                else if (sum2 > sum1)
                {
                    right--;
                }
                else if (sum2 == sum1)
                {
                    vector<int> quadruplets(4, 0);
                    quadruplets[0] = nums[i];
                    quadruplets[1] = nums[j];
                    quadruplets[2] = nums[left];
                    quadruplets[3] = nums[right];
                    ans.push_back(quadruplets);

                    while (left < right && nums[left] == quadruplets[2])
                    {
                        left++;
                    }
                    while (left < right && nums[right] == quadruplets[3])
                    {
                        right--;
                    }
                }
            }
            while (j + 1 < n && nums[j + 1] == nums[j])
            {
                j++;
            }
        }
        while (i + 1 < n && nums[i + 1] == nums[i])
        {
            i++;
        }
    }
    return ans;
}
// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]