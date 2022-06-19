#include <bits/stdc++.h>
using namespace std;

string LPS(string s)
{
    int n = s.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int start, len;
    for (int k = 0; k < n; k++)
    {
        int i = 0, j = k;
        while (j < n)
        {
            if (k == 0)
            {
                dp[i][j] = true;
            }
            else if (k == 1)
            {
                if (s[i] == s[j])
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
            else
            {
                if (s[i] == s[j] && dp[i + 1][j - 1])
                {
                    dp[i][j] = true;
                }
                else
                {
                    false;
                }
            }
            if (dp[i][j])
            {
                start = i;
                len = j - i + 1;
            }
            i++;
            j++;
        }
    }
    return s.substr(start, len);
}

int main()
{
    string s = "babdc";
    cout << LPS(s) << endl;
    return 0;
}
// Output : bab;
