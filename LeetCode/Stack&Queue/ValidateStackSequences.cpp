#include <bits/stdc++.h>
using namespace std;
bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
{
    if (pushed.size() <= 2)
    {
        return true;
    }
    stack<int> st;
    int popIdx = 0;
    for (int i = 0; i < popped.size(); i++)
    {
        st.push(pushed[i]);
        while (!st.empty() && popIdx < popped.size() && popped[popIdx] == st.top())
        {
            st.pop();
            popIdx++;
        }
    }
    return st.empty();
}
// Input: pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
// Output: true