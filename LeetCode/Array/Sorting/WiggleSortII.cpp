#include <bits/stdc++.h>
using namespace std;
void wiggleSort(vector<int> &nums)
{
    vector<int> res;
    sort(nums.begin(), nums.end());
    int n = nums.size() - 1;
    int i = n / 2;
    int j = i;
    while (i >= 0)
    {
        res.push_back(nums[i]);
        if (n > j)
        {
            res.push_back(nums[n]);
            n--;
        }
        i--;
    }
    nums = res;
}
// Input: nums = [1,5,1,1,6,4]
// Output: [1,6,1,5,1,4]
// Explanation: [1,4,1,5,1,6] is also accepted.