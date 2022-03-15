#include <bits/stdc++.h>
using namespace std;
string minRemoveToMakeValid(string s)
{
    stack<char> st;
    string ans = "";
    int OpenCount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
            OpenCount++;
        }
        else if (s[i] == ')')
        {
            if (OpenCount > 0)
            {
                OpenCount--;
                st.push(')');
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    int CloseCount = 0;
    while (!st.empty())
    {
        char t = st.top();
        st.pop();
        if (t == '(')
        {
            if (CloseCount <= 0)
            {
                continue;
            }
            CloseCount--;
        }
        else if (t == ')')
        {
            CloseCount++;
        }
        ans += t;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
// Input: s = "lee(t(c)o)de)"
// Output: "lee(t(c)o)de"