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

// Input: arr = [40,10,20,30]
// Output: [4,1,2,3]
// Explanation: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.