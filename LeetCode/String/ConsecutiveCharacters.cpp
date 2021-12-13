#include <bits/stdc++.h>
using namespace std;
int maxPower(string s)
{
    int ans = 0;
    int count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
    return ans;
}
int main()
{
    string s = "leetcode";
    cout<<maxPower(s)<<endl;
    return 0;
}
// Input: s = "leetcode"
// Output: 2