//LeetCode Easy 217;
#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int>nums={1,2,3,4};
    cout<<containsDuplicate(nums)<<endl;
    return 0;
}