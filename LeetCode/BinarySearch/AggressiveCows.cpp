// CodeStudio Problem
#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cows = 1;
    int lastStallPos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastStallPos >= mid)
        {
            cows++;
            if (cows == k)
            {
                return true;
            }
            lastStallPos = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 0, end = stalls[stalls.size() - 1], ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
// Input :
// 6 4
// 0 3 4 7 10 9

// Output :
// 4
