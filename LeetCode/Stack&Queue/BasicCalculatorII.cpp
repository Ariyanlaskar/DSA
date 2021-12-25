#include <bits/stdc++.h>
using namespace std;
int calculate(string s)
{
    s += '+';
    stack<int> st;
    int currSum = 0;
    char sign = '+';
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            currSum = currSum * 10 + (s[i] - '0');
        }
        else if (s[i] != ' ')
        {
            if (sign == '-')
            {
                st.push(currSum * (-1));
            }
            else if (sign == '+')
            {
                st.push(currSum);
            }
            else if (sign == '/')
            {
                int t = st.top();
                st.pop();
                st.push(t / currSum);
            }
            else if (sign == '*')
            {
                int t = st.top();
                st.pop();
                st.push(t * currSum);
            }
            currSum = 0;
            sign = s[i];
        }
    }
    int ans = 0;
    while (st.size())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}
// Input: s = "3+2*2"
// Output: 7