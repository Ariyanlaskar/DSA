#include <bits/stdc++.h>
using namespace std;
int arrayPairSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int ans = 0;
    for (int i = 1; i < n; i += 2)
    {
        ans += min(nums[i - 1], nums[i]);
    }
    return ans;
}
int main()
{
    vector<int>nums = {6, 2, 6, 5, 1, 2 };
    cout<<arrayPairSum(nums)<<endl;
    return 0;
}     
// Input: nums = [6,2,6,5,1,2]
// Output: 9