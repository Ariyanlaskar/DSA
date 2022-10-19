#include <bits/stdc++.h>
using namespace std;
static bool cmp(pair<int, string> &a, pair<int, string> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
vector<string> topKFrequent(vector<string> &words, int k)
{
    map<string, int> mp;
    for (auto &i : words)
    {
        mp[i]++;
    }
    vector<pair<int, string>> p;
    for (auto it : mp)
    {
        p.push_back({it.second, it.first});
    }
    sort(p.begin(), p.end(), cmp);
    while (p.size() > k)
    {
        p.pop_back();
    }
    vector<string> ans;
    for (auto it : p)
        ans.push_back(it.second);
    return ans;
}

// Input: words = ["i","love","leetcode","i","love","coding"], k = 2
// Output: ["i","love"]