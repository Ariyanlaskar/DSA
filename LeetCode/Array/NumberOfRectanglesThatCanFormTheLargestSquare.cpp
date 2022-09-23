#include <bits/stdc++.h>
using namespace std;
int countGoodRectangles(vector<vector<int>> &rect)
{
    vector<int> res;
    int maxValue = -1;
    for (int i = 0; i < rect.size(); i++)
    {
        int a = min(rect[i][0], rect[i][1]);
        maxValue = max(a, maxValue);
        res.push_back(a);
    }
    int count = 0;
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] == maxValue)
            count++;
    }
    return count;
}
// Input: rectangles = [[5,8],[3,9],[5,12],[16,5]]
// Output: 3