#include <bits/stdc++.h>
using namespace std;
//Slow solution
vector<string> findRelativeRanks(vector<int> &score)
{
    vector<string> ans;
    vector<int> s = score;
    sort(score.begin(), score.end());
    int j = 1;
    map<int, string> mp;
    for (int i = score.size() - 1; i >= 0; i--)
    {
        if (j == 1)
        {
            mp[score[i]] = "Gold Medal";
            j++;
        }
        else if (j == 2)
        {
            mp[score[i]] = "Silver Medal";
            j++;
        }
        else if (j == 3)
        {
            mp[score[i]] = "Bronze Medal";
            j++;
        }
        else
        {
            mp[score[i]] = to_string(j);
            j++;
        }
    }
    for (int i = 0; i < score.size(); i++)
    {
        ans.push_back(mp[s[i]]);
    }
    return ans;
}
//Input: score = [5,4,3,2,1]
// Output: ["Gold Medal","Silver Medal","Bronze Medal","4","5"]