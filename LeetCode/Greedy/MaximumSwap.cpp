#include <bits/stdc++.h>
using namespace std;
int maximumSwap(int num)
{
    string nums = to_string(num);
    int count = 0, maxValue, idx = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        maxValue = nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (maxValue <= nums[j])
            {
                maxValue = nums[j];
                idx = j;
            }
        }
        if (count == 0 && idx != -1 && nums[i] != maxValue)
        {
            swap(nums[i], nums[idx]);
            count++;
        }
    }
    return stoi(nums);
}
// Input: num = 2736
// Output: 7236