#include <bits/stdc++.h>
using namespace std;
bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
{
    vector<int> graph[numCourses];
    for (int i = 0; i < prerequisites.size(); i++)
    {
        graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
    }
    vector<int> vis(numCourses, 0);
    vector<int> vis2(numCourses, 0);
    for (int i = 0; i < numCourses; i++)
    {
        if (vis[i] == 0)
        {
            if (dfs(i, graph, vis, vis2))
            {
                return false;
            }
        }
    }
    return true;
}
bool dfs(int node, vector<int> graph[], vector<int> &vis, vector<int> &vis2)
{
    vis[node] = 1;
    vis2[node] = 1;
    for (int i = 0; i < graph[node].size(); i++)
    {
        if (vis[graph[node][i]] == 0)
        {
            if (dfs(graph[node][i], graph, vis, vis2))
            {
                return true;
            }
        }
        else if (vis2[graph[node][i]] == 1)
        {
            return true;
        }
    }
    vis2[node] = 0;
    return false;
}