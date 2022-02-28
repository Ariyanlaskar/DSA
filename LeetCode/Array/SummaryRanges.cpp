#include <bits/stdc++.h>
using namespace std;
vector<string> summaryRanges(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return {};
    }
    vector<string> v;
    string res;
    int first = 0;
    int i = 1;
    while (i < nums.size())
    {
        if (nums[i] > nums[i - 1] + 1)
        {
            if (nums[i - 1] == nums[first])
            {
                v.push_back(to_string(nums[first]));
                first = i;
            }
            else
            {
                res = to_string(nums[first]) + "->" + to_string(nums[i - 1]);
                v.push_back(res);
                first = i;
            }
        }
        i++;
    }
    if (nums[first] == nums.size() - 1)
    {
        v.push_back(to_string(nums[first]));
    }
    else
    {
        v.push_back(to_string(nums[first]) + "->" + to_string(nums[nums.size() - 1]));
    }
    return v;
}
// Input: nums = [0,1,2,4,5,7]
// Output: ["0->2","4->5","7"]