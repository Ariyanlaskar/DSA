#include <bits/stdc++.h>
using namespace std;
int findDist(const vector<int> &point1, const vector<int> &point2)
{
    return abs(point1[0] - point2[0]) + abs(point1[1] - point2[1]);
}
int minCostConnectPoints(vector<vector<int>> &points)
{
    int total = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, 0});
    unordered_set<int> visited;
    while (!pq.empty())
    {
        auto curr = pq.top();
        pq.pop();
        if (visited.find(curr.second) != visited.end())
        {
            continue;
        }
        total = total - curr.first;
        visited.insert(curr.second);
        for (int i = 0; i < points.size(); i++)
        {
            if (i != curr.second && visited.find(i) == visited.end())
            {
                pq.push({-findDist(points[curr.second], points[i]), i});
            }
        }
    }
    return total;
}