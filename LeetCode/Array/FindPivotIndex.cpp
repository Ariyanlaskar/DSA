#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    int sum = 0;
    for (auto &i : nums)
    {
        sum += i;
    }
    int Lsum = 0, Rsum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            Lsum = 0;
        }
        else
        {
            Lsum += nums[i - 1];
        }
        Rsum = sum - (Lsum + nums[i]);
        if (Lsum == Rsum)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int>nums = {1,7,3,6,5,6};
    cout<<pivotIndex(nums)<<endl;
    return 0;
}
// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11