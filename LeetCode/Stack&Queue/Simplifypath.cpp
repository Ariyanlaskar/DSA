#include <bits/stdc++.h>
using namespace std;
string simplifyPath(string path)
{
    stack<string> st;
    int n = path.size();
    string temp = "";
    string res = "";
    if (path[n - 1] != '/')
    {
        path += '/';
        n++;
    }
    int i = 1;
    while (i < n)
    {
        if (path[i] == '/')
        {
            if (temp == "" || temp == ".")
            {
                temp = "";
                i++;
                continue;
            }
            else if (temp == "..")
            {
                if (!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(temp);
            }
            temp = "";
        }
        else
        {
            temp += path[i];
        }
        i++;
    }
    while (!st.empty())
    {
        res = '/' + st.top() + res;
        st.pop();
    }
    if (res == "")
    {
        res += '/';
    }
    return res;
}
// Input: path = "/home/"
// Output: "/home"