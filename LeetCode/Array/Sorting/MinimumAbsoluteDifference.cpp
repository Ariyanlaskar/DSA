#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> minimumAbsDifference(vector<int> &arr)
{
    vector<vector<int>> ans;
    int n = arr.size();
    int minAbsDiff = INT_MAX;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++)
    {
        minAbsDiff = min(arr[i + 1] - arr[i], minAbsDiff);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] == minAbsDiff)
        {
            ans.push_back({arr[i], arr[i + 1]});
        }
    }
    return ans;
}
// Input: arr = [4,2,1,3]
// Output: [[1,2],[2,3],[3,4]]