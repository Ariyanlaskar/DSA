#include <bits/stdc++.h>
using namespace std;
int threeSumMulti(vector<int> &arr, int target)
{
    int ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            ans += mp[target - arr[i] - arr[j]];
        }
        ans = ans % 1000000007;
        mp[arr[i]]++;
    }
    return ans % 1000000007;
}