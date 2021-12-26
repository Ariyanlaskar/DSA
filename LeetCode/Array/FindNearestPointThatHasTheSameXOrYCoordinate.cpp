//LeetCode Easy 1779;
#include <bits/stdc++.h>
using namespace std;
int nearestValidPoint(int x, int y, vector<vector<int>> &points)
{
    int n = points.size();
    int ans = INT_MAX;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (points[i][0] == x || points[i][1] == y)
        {
            int s = abs(points[i][0] - x) + abs(points[i][1] - y);
            if (s < ans)
            {
                idx = i;
                ans = s;
            }
        }
    }
    return idx;
}
// Input: x = 3, y = 4, points = [[1,2],[3,1],[2,4],[2,3],[4,4]]
// Output: 2