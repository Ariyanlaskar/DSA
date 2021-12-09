//LeetCode Easy 485;
#include <bits/stdc++.h>
using namespace std;
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
    vector<int>nums = {1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums)<<endl;
    return 0;
}
// Input: nums = [1,1,0,1,1,1]
// Output: 3