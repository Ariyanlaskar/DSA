#include <bits/stdc++.h>
using namespace std;
int findMaxLength(vector<int> &nums)
{
    unordered_map<int, int> mp;
    mp[0] = -1;
    int sum = 0;
    int len = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            sum += 1;
        }
        else if (nums[i] == 0)
        {
            sum -= 1;
        }
        if (mp.find(sum) != mp.end())
        {
            int n = mp[sum];
            int size = i - n;
            if (size > len)
            {
                len = size;
            }
        }
        else
        {
            mp[sum] = i;
        }
    }
    return len;
}