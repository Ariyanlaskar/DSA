#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int element = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = nums[i];
            count += 1;
        }
        else if (nums[i] == element)
        {
            count += 1;
        }
        else
        {
            count -= 1;
        }
    }
    return element;
}
// Input: nums = [1,2,0]
// Output: 3