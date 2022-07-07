#include <bits/stdc++.h>
using namespace std;
vector<int> arrayRankTransform(vector<int> &arr)
{
    vector<int> dup = arr;
    int count = 1;
    sort(arr.begin(), arr.end());
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mp[arr[i]] == 0)
        {
            mp[arr[i]] = count;
            count++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        dup[i] = mp[dup[i]];
    }
    return dup;
}