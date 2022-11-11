// LeetCode Easy 997;
#include <bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<int>> &trust)
{
    vector<int> indeg(n + 1);
    vector<int> outdeg(n + 1);
    indeg[0] = -1;
    outdeg[0] = -1;
    for (auto it : trust)
    {
        indeg[it[1]]++;
        outdeg[it[0]]++;
    }
    for (int i = 0; i <= n; i++)
    {
        if (indeg[i] == (n - 1) && outdeg[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 4;
    vector<vector<int>> trust = {{1, 3}, {1, 4}, {2, 3}, {2, 4}, {4, 3}};
    cout << findJudge(n, trust) << endl;
    return 0;
}