// LeetCode Easy 485;
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    if (nums.size() < 3)
    {
        return nums.size();
    }
    int i = 2, j = 2;
    for (int j = 2; j < nums.size(); j++)
    {
        if (nums[j] != nums[i - 2])
        {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int ans = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            count = 0;
        }
        else
        {
            count++;
        }
        ans = max(ans, count);
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
// Input: nums = [1,1,0,1,1,1]
// Output: 3