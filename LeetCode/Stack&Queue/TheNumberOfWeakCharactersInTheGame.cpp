#include <bits/stdc++.h>
using namespace std;
bool compare(vector<int> &a, vector<int> &b)
{
    if (a[0] == b[0])
    {
        return a[1] > b[1];
    }
    else
    {
        return a[0] < b[0];
    }
}

int numberOfWeakCharacters(vector<vector<int>> &properties)
{
    sort(properties.begin(), properties.end(), compare);
    int n = properties.size();
    stack<int> st;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() < properties[i][1])
        {
            st.pop();
            count++;
        }
        st.push(properties[i][1]);
    }
    return count;
}