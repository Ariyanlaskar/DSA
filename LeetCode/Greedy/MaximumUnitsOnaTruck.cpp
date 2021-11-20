//LeetCode Easy 1710;
#include <bits/stdc++.h>
using namespace std;
int maximumUnits(vector<vector<int>> &boxTypes, int target)
{
    sort(boxTypes.begin(), boxTypes.end(), [&](vector<int> &b, vector<int> &c)
         { return b[1] < c[1]; });
    int ans = 0;
    int n = boxTypes.size();
    int j = boxTypes.size() - 1;
    while (j >= 0 && target > 0)
    {
        if (boxTypes[j][0] != 0)
        {
            ans += boxTypes[j][1];
            boxTypes[j][0]--;
            target--;
        }
        else
        {
            j--;
        }
    }
    return ans;
}
int main()
{   
    vector<vector<int>>boxTypes = {{1,3},{2,2},{3,1}};
    int truckSize = 4;
    cout<<maximumUnits(boxTypes,truckSize);
    return 0;
}
// Output: 8