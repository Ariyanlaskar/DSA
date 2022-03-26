#include <bits/stdc++.h>
using namespace std;
vector<int> left, right;
void Left_small_idx(vector<int> &heights)
{
    stack<pair<int, int>> st;
    for (int i = 0; i < heights.size(); i++)
    {
        if (st.empty())
        {
            left.push_back(-1);
        }
        else if (!st.empty() && st.top().second < heights[i])
        {
            left.push_back(st.top().first);
        }
        else if (!st.empty() && st.top().second >= heights[i])
        {
            while (!st.empty() && st.top().second >= heights[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                left.push_back(-1);
            }
            else
            {
                left.push_back(st.top().first);
            }
        }
        st.push({i, heights[i]});
    }
}
void Right_small_idx(vector<int> &heights)
{
    stack<pair<int, int>> st;
    for (int i = heights.size() - 1; i >= 0; i--)
    {
        if (st.empty())
        {
            right.push_back(heights.size());
        }
        else if (!st.empty() && st.top().second < heights[i])
        {
            right.push_back(st.top().first);
        }
        else if (!st.empty() && st.top().second >= heights[i])
        {
            while (!st.empty() && st.top().second >= heights[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                right.push_back(heights.size());
            }
            else
            {
                right.push_back(st.top().first);
            }
        }
        st.push({i, heights[i]});
    }
    reverse(right.begin(), right.end());
}
int largestRectangleArea(vector<int> &heights)
{
    Left_small_idx(heights);
    Right_small_idx(heights);
    vector<int> width;
    for (int i = 0; i < heights.size(); i++)
    {
        width.push_back(right[i] - left[i] - 1);
    }
    int ans = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        int c = width[i] * heights[i];
        ans = max(c, ans);
    }
    return ans;
}
// Input: heights = [2,1,5,6,2,3]
// Output: 10