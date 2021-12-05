#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    vector<int> res;
    sort(intervals.begin(), intervals.end());
    res.push_back(intervals[0][0]);
    res.push_back(intervals[0][1]);
    for (int i = 1; i < intervals.size(); i++)
    {
        if (res[1] >= intervals[i][0])
        {
            if (res[1] <= intervals[i][1])
            {
                res[1] = intervals[i][1];
            }
        }
        else
        {
            ans.push_back(res);
            res[0] = intervals[i][0];
            res[1] = intervals[i][1];
        }
    }
    ans.push_back(res);
    return ans;
}
//Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].