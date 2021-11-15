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
    vector<int>height ={4,3,2,1,4};
    cout<<maxArea(height)<<endl;
    return 0;
}
// Output: 16