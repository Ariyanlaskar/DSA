#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
vector<int> nums;
vector<int> path;
vector<vector<int>> combinationSum3(int k, int n)
{
    nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    findPath(k, n, 0);
    return ans;
}
void findPath(int k, int n, int idx)
{
    int Psize = path.size();
    if (n < 0 || k < Psize)
    {
        return;
    }
    if (n == 0 && k == Psize)
    {
        ans.push_back(path);
        return;
    }
    for (int i = idx; i < nums.size(); i++)
    {
        if (nums[i] > n)
        {
            break;
        }
        path.push_back(nums[i]);
        findPath(k, n - nums[i], i + 1);
        path.pop_back();
    }
}
// Input: k = 3, n = 7
// Output: [[1,2,4]]