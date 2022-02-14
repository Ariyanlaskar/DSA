#include <bits/stdc++.h>
using namespace std;
bool increasingTriplet(vector<int> &nums)
{
    int first = INT_MAX, second = INT_MAX;
    for (auto i : nums)
    {
        if (i <= first)
        {
            first = i;
        }
        else if (i <= second)
        {
            second = i;
        }
        else
        {
            return true;
        }
    }
    return false;
}
// Input: nums = [1,2,3,4,5]
// Output: true