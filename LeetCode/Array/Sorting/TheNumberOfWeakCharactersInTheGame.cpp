#include <bits/stdc++.h>
using namespace std;
bool compare(vector<int> &a, vector<int> &b)
{
    if (a[0] == b[0])
    {
        return a[1] > b[1];
    }
    else
    {
        return a[0] < b[0];
    }
}
int numberOfWeakCharacters(vector<vector<int>> &properties)
{
    int n = properties.size();
    sort(properties.begin(), properties.end(), compare);
    int maxD = INT_MIN;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (properties[i][1] < maxD)
        {
            count++;
        }
        maxD = max(maxD, properties[i][1]);
    }
    return count;
}
// Input: properties = [[5,5],[6,3],[3,6]]
// Output: 0