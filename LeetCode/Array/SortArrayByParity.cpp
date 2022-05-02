#include <bits/stdc++.h>
using namespace std;
vector<int> sortArrayByParity(vector<int> &nums)
{
    vector<int> EvenArr, OddArr, Ans;
    for (auto i : nums)
    {
        if (i % 2 == 0)
        {
            EvenArr.push_back(i);
        }
        else
        {
            OddArr.push_back(i);
        }
    }
    for (auto i : EvenArr)
    {
        Ans.push_back(i);
    }
    for (auto i : OddArr)
    {
        Ans.push_back(i);
    }
    return Ans;
}
// Input: nums = [3,1,2,4]
// Output: [2,4,3,1]