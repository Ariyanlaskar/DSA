#include <bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int> &nums)
{
    int n = nums.size();
    int ans = 1;
    sort(nums.begin(), nums.end());
    for (int i = n - 1; i >= n - 3; i--)
    {
        ans = ans * nums[i];
    }
    int c = nums[0] * nums[1] * nums[n - 1];
    ans = max(ans, c);
    return ans;
}