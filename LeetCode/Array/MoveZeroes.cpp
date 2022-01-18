//Using Two Pointer Approach;
#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int first = 0;
    int second = 1;
    if (nums.size() != 2 || nums[0] != 1)
    {
        while (second < nums.size())
        {
            if (nums[first] == 0 && nums[second] == 0)
            {
                second++;
            }
            else if (nums[first] == 0 && nums[second] != 0)
            {
                swap(nums[first], nums[second]);
                first++;
                second++;
            }
            else if (nums[first] != 0 && nums[second] == 0)
            {
                first++;
                second++;
            }
            else if (nums[first] != 0 && nums[second] != 0)
            {
                first++;
                second++;
            }
        }
    }
}
//Alternate Method;
void moveZeroes(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            ans.push_back(nums[i]);
        }
    }
    for (int i = ans.size(); i < nums.size(); i++)
    {
        ans.push_back(0);
    }
    nums = ans;
}
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
