#include <bits/stdc++.h>
using namespace std;
int findMinArrowShots(vector<vector<int>> &points)
{
    sort(points.begin(), points.end());
    int start = points[0][0];
    int end = points[0][1];
    int count = 1;
    for (int i = 1; i < points.size(); i++)
    {
        if (end < points[i][0])
        {
            count++;
            start = points[i][0];
            end = points[i][1];
        }
        else if (points[i][1] < end)
        {
            start = points[i][0];
            end = points[i][1];
        }
    }
    return count;
}
// Input: points = [[10,16],[2,8],[1,6],[7,12]]
// Output: 2