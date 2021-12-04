#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;
    vector<vector<string>> ans;
    for (auto i : strs)
    {
        string word = i;
        sort(i.begin(), i.end());
        mp[i].push_back(word);
    }
    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}
// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]