#include <bits/stdc++.h>
using namespace std;
vector<int> targetIndices(vector<int> &nums, int target)
{
    vector<int> ans;
    int count = 0;
    int tCount = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < target)
        {
            count++;
        }
        else if (target == nums[i])
        {
            tCount++;
        }
    }
    for (int i = 0; i < tCount; i++)
    {
        ans.push_back(count++);
    }
    return ans;
}
// Input: nums = [1,2,5,2,3], target = 2;
// Output: [1,2];