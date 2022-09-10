#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
vector<int> ans;
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    findComb(candidates, target, 0);
    return res;
}
void findComb(vector<int> &candidates, int target, int idx)
{
    if (idx == candidates.size())
    {
        if (target == 0)
        {
            res.push_back(ans);
        }
        return;
    }
    if (candidates[idx] <= target)
    {
        ans.push_back(candidates[idx]);
        findComb(candidates, target - candidates[idx], idx);
        ans.pop_back();
    }
    findComb(candidates, target, idx + 1);
}
// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]

