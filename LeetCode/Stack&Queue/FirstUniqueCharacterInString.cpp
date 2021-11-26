//LeetCode Easy 387(slow);
#include <bits/stdc++.h>
using namespace std;
int firstUniqChar(string s)
{
    vector<char> val(26, 0);
    queue<pair<char, int>> q;
    for (int i = 0; i < s.size(); i++)
    {
        if (q.empty() && val[s[i] - 'a'] == 0)
        {
            q.push({s[i], i});
        }
        else
        {
            if (s[i] == q.front().first)
            {
                q.pop();
            }
            else if (val[s[i] - 'a'] == 0)
            {
                q.push({s[i], i});
            }
        }
        val[s[i] - 'a']++;
    }
    while (!q.empty())
    {
        if (val[q.front().first - 'a'] <= 1)
        {
            return q.front().second;
        }
        q.pop();
    }
    return -1;
}
int main()
{
    string s = "leetcode";
    cout<<firstUniqChar(s)<<endl;
    return 0;
}
// Input: s = "leetcode"
// Output: 0