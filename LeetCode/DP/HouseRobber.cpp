#include <bits/stdc++.h>
using namespace std;
int rob(vector<int> &nums)
{
    if (nums.size() <= 1)
    {
        return nums[0];
    }
    int n = nums.size();
    vector<int> v(n);
    v[0] = nums[0];
    v[1] = max(v[0], nums[1]);
    for (int i = 2; i < n; i++)
    {
        v[i] = max(nums[i] + v[i - 2], v[i - 1]);
    }
    return v[n - 1];
}
int main()
{
    vector<int>nums = {2,7,9,3,1};
    cout<<rob(nums)<<endl;
    return 0;
}
// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.