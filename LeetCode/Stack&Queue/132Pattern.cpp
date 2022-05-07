#include <bits/stdc++.h>
using namespace std;
bool find132pattern(vector<int> &nums)
{
    stack<int> st;
    int mini = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] < mini)
        {
            return true;
        }
        while (!st.empty() && st.top() < nums[i])
        {
            mini = st.top();
            st.pop();
        }
        st.push(nums[i]);
    }
    return false;
}
// Input: nums = [1,2,3,4]
// Output: false

// Input: nums = [3,1,4,2]
// Output: true
// Explanation: There is a 132 pattern in the sequence: [1, 4, 2].