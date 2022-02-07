#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> largeGroupPositions(string s)
{
    vector<vector<int>> ans;
    int count = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            if (count >= 3 && s[i] != s[i + 1])
            {
                vector<int> res = {i - count + 1, i};
                ans.push_back(res);
            }
            count = 1;
        }
    }
    if (count >= 3)
    {
        int i = s.size() - 1;
        vector<int> res = {i - count + 1, i};
        ans.push_back(res);
    }
    return ans;
}
// Input: s = "abbxxxxzzy"
// Output: [[3,6]]