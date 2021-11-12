#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void validParenthesis(int n, int open, int close, string s)
{
    if (open == n && close == n)
    {
        ans.push_back(s);
        return;
    }
    if (open < n)
    {
        validParenthesis(n, open + 1, close, s + "(");
    }
    if (close < open)
    {
        validParenthesis(n, open, close + 1, s + ")");
    }
}
vector<string> generateParenthesis(int n)
{
    string s = "";
    validParenthesis(n, 0, 0, s);
    return ans;
}
// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
