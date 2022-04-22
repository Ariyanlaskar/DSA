#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<string> &words)
{
    int n = words.size();
    bool hash[n][26];
    memset(hash, false, sizeof(hash));
    for (int i = 0; i < n; i++)
    {
        for (auto j : words[i])
        {
            hash[i][j - 'a'] = true;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int n1 = words[i].size();
        for (int j = i + 1; j < n; j++)
        {
            if (check(hash[i], hash[j]))
            {
                int n2 = words[j].size();
                ans = max(ans, n1 * n2);
            }
        }
    }
    return ans;
}
bool check(bool a[26], bool b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == true and b[i] == true)
        {
            return false;
        }
    }
    return true;
}