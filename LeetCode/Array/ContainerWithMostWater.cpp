#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
    int mxArea = -1;
    int i = 0;
    int j = height.size() - 1;
    while (i < j)
    {
        int minh = min(height[i], height[j]);
        mxArea = max(mxArea, minh * (j - i));
        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return mxArea;
}
int main()
{
    vector<int> height = {4, 3, 2, 1, 4};
    cout << maxArea(height) << endl;
    return 0;
}
// Output: 16

// OR(different code);
// int maxArea(vector<int> &height)
// {
//     int i = 0, j = height.size() - 1;
//     int ans = 0;
//     while (i < j)
//     {
//         if (height[i] < height[j])
//         {
//             int cal = (height[i] * (j - i));
//             ans = max(ans, cal);
//             i++;
//         }
//         else
//         {
//             int cal = (height[j] * (j - i));
//             ans = max(ans, cal);
//             j--;
//         }
//     }
//     return ans;
// }