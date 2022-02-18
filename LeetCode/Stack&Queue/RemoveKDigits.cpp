#include <bits/stdc++.h>
using namespace std;
string removeKdigits(string num, int k)
{
    int n = num.size() - k;
    stack<char> st;
    string ans;
    for (auto &it : num)
    {
        while (!st.empty() && st.top() > it && k)
        {
            st.pop();
            k--;
        }
        st.push(it);
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    ans = ans.substr(0, n);
    k = 0;
    while (k < ans.size() && ans[k] == '0')
    {
        k++;
    }
    ans = ans.substr(k, n);
    if (ans == "")
    {
        return "0";
    }
    return ans;
}
// Input: num = "1432219", k = 3
// Output: "1219"