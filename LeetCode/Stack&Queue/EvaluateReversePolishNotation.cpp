#include <bits/stdc++.h>
using namespace std;
int evalRPN(vector<string> &tokens)
{
    stack<int> st;
    int i = 0;
    while (i < tokens.size())
    {
        int ans;
        if (tokens[i] == "+")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            ans = a + b;
        }
        else if (tokens[i] == "*")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            ans = a * b;
        }
        else if (tokens[i] == "-")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            ans = b - a;
        }
        else if (tokens[i] == "/")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            ans = b / a;
        }
        else
        {
            ans = stoi(tokens[i]);
        }
        st.push(ans);
        i++;
    }
    return st.top();
}
// Input: tokens = ["2","1","+","3","*"]
// Output: 9
// Explanation: ((2 + 1) * 3) = 9
