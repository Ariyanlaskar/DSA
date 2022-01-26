#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> ans;
    vector<int> negV;
    vector<int> posV;
    for (auto i : nums)
    {
        if (i < 0)
        {
            negV.push_back(i);
        }
        else if (i >= 0)
        {
            posV.push_back(i);
        }
    }
    int i = 0;
    while (i < negV.size())
    {
        ans.push_back(posV[i]);
        ans.push_back(negV[i]);
        i++;
    }
    return ans;
}
// Input: nums = [3,1,-2,-5,2,-4]
// Output: [3,-2,1,-5,2,-4]