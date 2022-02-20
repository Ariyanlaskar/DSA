#include <bits/stdc++.h>
using namespace std;
int removeCoveredIntervals(vector<vector<int>> &intervals)
{
    int ans = 0;
    int first = INT_MIN, second = INT_MIN;
    sort(intervals.begin(), intervals.end());
    for (int i = 0; i < intervals.size(); i++)
    {
        if (first < intervals[i][0] && second < intervals[i][1])
        {
            first = intervals[i][0];
            second = intervals[i][1];
            ans++;
        }
        else
        {
            second = max(intervals[i][1], second);
        }
    }
    return ans;
}
// Input: intervals = [[1,4],[3,6],[2,8]]
// Output: 2