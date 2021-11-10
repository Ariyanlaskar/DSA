//Using Vector(Extra Space);
#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    vector<int> ans;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            ans.push_back(nums[i]);
            count++;
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