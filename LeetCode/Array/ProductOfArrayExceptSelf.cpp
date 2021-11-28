#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    int count = 0, Zcount = 0;
    int product = 1;
    int product2 = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            product = product * nums[i];
            count++;
        }
        else
        {
            product2 = 0;
            Zcount++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (count == 0 && product == 1)
        {
            nums[i] = 0;
        }
        else if (product2 == 0)
        {
            if (nums[i] == 0 && Zcount > 1)
            {
                nums[i] = 0;
            }
            else if (nums[i] == 0 && Zcount == 1)
            {
                nums[i] = product;
            }
            else
            {
                nums[i] = 0;
            }
        }
        else
        {
            nums[i] = product / nums[i];
        }
    }
    return nums;
}
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]