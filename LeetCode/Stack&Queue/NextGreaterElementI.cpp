#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums2.size();
    stack<int> st;
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums2[i]] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() < nums2[i])
        {
            mp[st.top()] = nums2[i];
            st.pop();
        }
        st.push(nums2[i]);
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        ans.push_back(mp[nums1[i]]);
    }
    return ans;
}
// Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]