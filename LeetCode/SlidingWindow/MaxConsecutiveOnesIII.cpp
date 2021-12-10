#include <bits/stdc++.h>
using namespace std;
int longestOnes(vector<int> &nums, int k)
{
    int n = nums.size();
    int ans = 0;
    int i = 0, j = 0;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            s++;
        }
        while (s > k)
        {
            if (nums[j] == 0)
            {
                s--;
            }
            j++;
        }
        ans = max(ans, i - j + 1);
    }
    return ans;
}
int main()
{
    vector<int>nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    cout<<longestOnes(nums,k)<<endl;
    return 0;
}
// Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
// Output: 6