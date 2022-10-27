#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
vector<int> v;
vector<vector<int>> combine(int n, int k)
{
    findCombination(n, k, 1);
    return ans;
}
void findCombination(int n, int k, int start)
{
    if (k == 0)
    {
        ans.push_back(v);
        return;
    }
    for (int i = start; i <= n; i++)
    {
        v.push_back(i);
        findCombination(n, k - 1, i + 1);
        v.pop_back();
    }
}

// Input: n = 4, k = 2
// Output: [[2,4],[3,4],[2,3],[1,2],[1,3],[1,4]]