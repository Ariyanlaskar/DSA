#include <bits/stdc++.h>
using namespace std;
bool checkPossibility(vector<int> &nums)
{
    bool turn = false;
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1] && i - 1 < 0)
        {
            turn = true;
        }
        else if (nums[i] > nums[i + 1])
        {
            if (i == n - 2 && turn == false)
            {
                turn == false;
            }
            else if (nums[i - 1] <= nums[i + 1] && turn == false)
            {
                turn = true;
            }
            else if (nums[i] <= nums[i + 2] && turn == false)
            {
                turn = true;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

// Input: nums = [4,2,3]
// Output: true
