#include <bits/stdc++.h>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();
    int ans = 0;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && height[st.top()] < height[i])
        {
            int curr = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }
            else
            {
                int diff = i - st.top() - 1;
                ans += (min(height[i], height[st.top()]) - height[curr]) * diff;
            }
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    vector<int>height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height)<<endl;
    return 0;
}
// Output: 6;