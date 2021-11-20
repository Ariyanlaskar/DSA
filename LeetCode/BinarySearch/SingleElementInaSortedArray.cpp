#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &nums)
{
    int i = 0;
    if (nums.size() == 1)
    {
        return nums[0];
    }
    int j = nums.size() - 1;
    while (i < j)
    {
        if (nums[i] == nums[i + 1])
        {
            i += 2;
        }
        if (nums[j] == nums[j - 1])
        {
            j -= 2;
        }
        if (nums[i] != nums[i + 1])
        {
            return nums[i];
        }
        if (nums[j] != nums[j - 1])
        {
            return nums[j];
        }
    }
    return -1;
}
int main()
{
    vector<int>nums = {3,3,7,7,10,11,11};
    cout<<singleNonDuplicate(nums)<<endl;
    return 0;
}
// Output: 10