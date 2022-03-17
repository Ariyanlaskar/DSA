#include <bits/stdc++.h>
using namespace std;
int scoreOfParentheses(string s)
{
    stack<int> st;
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(-1); //-1 in place "(" to avoid int/char issue;
        }
        else
        {
            if (st.top() == -1)
            {
                st.pop();
                st.push(1);
            }
            else
            {
                int sum = 0;
                while (!st.empty() && st.top() != -1)
                {
                    sum += st.top();
                    st.pop();
                }
                sum = sum * 2;
                st.pop();
                st.push(sum);
            }
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}
// Input: s = "()"
// Output: 1