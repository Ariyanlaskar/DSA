#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    int i = 0, j = 1;
    while (j < nums.size())
    {
        if (nums[i] == nums[j] && j - i >= 2)
        {
            nums[j] = INT_MAX;
            j++;
        }
        else if (nums[i] == nums[j])
        {
            j++;
        }
        else if (nums[i] != nums[j])
        {
            i = j;
        }
    }
    sort(nums.begin(), nums.end());
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == INT_MAX)
        {
            ans = i;
            break;
        }
        if (i == nums.size() - 1)
        {
            ans = i + 1;
        }
    }
    return ans;
}
// Input: nums = [1,1,1,2,2,3]
// Output: 5, nums = [1,1,2,2,3,_]