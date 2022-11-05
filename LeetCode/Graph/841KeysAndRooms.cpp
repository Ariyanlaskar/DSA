// LeetCode Medium 841
#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<vector<int>> &rooms, vector<bool> &vis)
{
    vis[node] = true;
    for (auto it : rooms[node])
    {
        if (!vis[it])
        {
            dfs(it, rooms, vis);
        }
    }
}
bool canVisitAllRooms(vector<vector<int>> &rooms)
{
    int n = rooms.size();
    vector<bool> vis(n, false);
    dfs(0, rooms, vis);
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
            return false;
    }
    return true;
}

// Input: rooms = [[1],[2],[3],[]]
// Output: true