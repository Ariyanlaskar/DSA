#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> ans(n);
    k = n - k % n;
    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[(i + k) % n];
    }
    nums = ans;
}
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]