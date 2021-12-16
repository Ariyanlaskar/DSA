#include <bits/stdc++.h>
using namespace std;
vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges)
{
    if (n == 1)
    {
        return {0};
    }
    vector<vector<int>> adj(n);
    vector<int> deg(n, 0);
    vector<int> ans;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (deg[i] == 1)
        {
            q.push(i);
        }
    }
    while (n > 2)
    {
        int s = q.size();
        n = n - s;
        while (s--)
        {
            int e = q.front();
            q.pop();
            for (auto &i : adj[e])
            {
                deg[i]--;
                if (deg[i] == 1)
                {
                    q.push(i);
                }
            }
        }
    }
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
    }
    return ans;
}
// Input: n = 4, edges = [[1,0],[1,2],[1,3]]
// Output: [1]