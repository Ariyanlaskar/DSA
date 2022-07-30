#include <bits/stdc++.h>
using namespace std;
vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
{
    unordered_map<char, int> mp;
    for (auto i : words2)
    {
        unordered_map<char, int> dup;
        for (auto j : i)
        {
            dup[j]++;
            mp[j] = max(dup[j], mp[j]);
        }
    }
    vector<string> ans;
    for (auto i : words1)
    {
        unordered_map<char, int> freq;
        for (auto j : i)
        {
            freq[j]++;
        }
        bool flag = true;
        for (auto itr = mp.begin(); itr != mp.end(); itr++)
        {
            if (freq[itr->first] < itr->second)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
// Input: words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["e","o"]
// Output: ["facebook","google","leetcode"]