#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &nums)
{
    vector<int> dupNums = nums;
    sort(dupNums.begin(), dupNums.end());
    int pos = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            pos = i + 1;
            break;
        }
    }
    for (int i = 0; i < dupNums.size(); i++)
    {
        if (dupNums[i] != nums[(i + pos) % nums.size()])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int>nums = {3,4,5,1,2};
    cout<<check(nums)<<endl;
    return 0;
}
// Output: true