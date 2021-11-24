#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> intervalIntersection(vector<vector<int>> &firstList, vector<vector<int>> &secondList)
{
    vector<vector<int>> ans;
    int n1 = firstList.size();
    int n2 = secondList.size();
    if (n1 == 0 || n2 == 0)
    {
        return ans;
    }
    int f = 0, s = 0;
    while (f < n1 && s < n2)
    {
        if (firstList[f][1] <= secondList[s][1])
        {
            if (firstList[f][1] >= secondList[s][0])
            {
                int start = max(firstList[f][0], secondList[s][0]);
                int end = min(firstList[f][1], secondList[s][1]);
                ans.push_back({start, end});
            }
            f++;
        }
        else
        {
            if (firstList[f][0] <= secondList[s][1])
            {
                int start = max(firstList[f][0], secondList[s][0]);
                int end = min(firstList[f][1], secondList[s][1]);
                ans.push_back({start, end});
            }
            s++;
        }
    }
    return ans;
}
// Input: firstList = [[0,2],[5,10],[13,23],[24,25]], secondList = [[1,5],[8,12],[15,24],[25,26]]
// Output: [[1,2],[5,5],[8,10],[15,23],[24,24],[25,25]]