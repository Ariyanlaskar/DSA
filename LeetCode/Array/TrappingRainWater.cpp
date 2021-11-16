#include <bits/stdc++.h>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();
    int left[n];
    int ans = 0;
    left[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], height[i]);
    }
    int right[n];
    right[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], height[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ans += min(right[i], left[i]) - height[i];
    }
    return ans;
}
int main()
{
    vector<int>height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height)<<endl;
    return 0;
}
// Output: 6