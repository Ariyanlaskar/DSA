#include <bits/stdc++.h>
using namespace std;
int minSwaps(string s)
{
    stack<char> st;
    int count = 0;
    for (auto i : s)
    {
        if (i == '[')
        {
            st.push(i);
        }
        else
        {
            if (!st.empty() && i == ']')
            {
                st.pop();
            }
            else
            {
                count++;
            }
        }
    }
    return (count + 1) / 2;
}
// Input: s = "]]][[["
// Output: 2