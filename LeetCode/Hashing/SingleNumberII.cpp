#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> s;
    for (auto i : nums)
    {
        s[i]++;
    }
    for (auto i : nums)
    {
        if (s[i] == 1)
        {
            return i;
        }
    }
    return -1;
}
// Input: nums = [2,2,3,2]
// Output: 3