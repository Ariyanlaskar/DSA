#include <bits/stdc++.h>
using namespace std;
int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0;
    int j = 0;
    int count = 0;
    while (i < g.size() && j < s.size())
    {
        if (g[i] <= s[j])
        {
            count++;
            i++;
            j++;
        }
        else if (g[i] > s[j])
        {
            j++;
        }
    }
    return count;
}

// Input: g = [1,2,3], s = [1,1]
// Output: 1