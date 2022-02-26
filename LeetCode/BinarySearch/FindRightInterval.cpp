#include <bits/stdc++.h>
using namespace std;
vector<int> findRightInterval(vector<vector<int>> &intervals)
{
    vector<vector<int>> arr;
    for (int i = 0; i < intervals.size(); i++)
    {
        arr.push_back({intervals[i][0], i});
    }
    sort(arr.begin(), arr.end());
    vector<int> ans;
    for (int i = 0; i < intervals.size(); i++)
    {
        int start = 0, end = arr.size() - 1;
        int idx = -1;
        int res = INT_MAX;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (arr[mid][0] < intervals[i][1])
            {
                start = mid + 1;
            }
            else if (arr[mid][0] >= intervals[i][1])
            {
                res = arr[mid][0];
                idx = arr[mid][1];
                end = mid - 1;
            }
        }
        if (res == INT_MAX)
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(idx);
        }
    }
    return ans;
}
