// LeetCode Easy 1971
#include <bits/stdc++.h>
using namespace std;
void dfs(int start, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[start] = true;
    for (auto it : adj[start])
    {
        if (!visited[it])
        {
            dfs(it, adj, visited);
        }
    }
}
bool validPath(int n, vector<vector<int>> &edges, int start, int end)
{
    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);
    for (int i = 0; i < edges.size(); i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    dfs(start, adj, visited);
    if (visited[end])
    {
        return true;
    }
    return false;
}
int main()
{
    int n = 3;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}};
    int start = 0;
    int end = 2;
    cout << validPath(n, edges, start, end) << endl;

    return 0;
}

// sample test cases;
//  int n = 6;
//  vector<vector<int>>edges = {{0,1},{0,2},{3,5},{5,4},{4,3}};
//  int start = 0, end = 5;