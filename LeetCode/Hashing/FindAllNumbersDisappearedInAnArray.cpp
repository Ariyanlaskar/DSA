#include <bits/stdc++.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    unordered_map<int, int> mp;
    vector<int> ans;
    for (auto &i : nums)
    {
        mp[i]++;
    }
    for (int i = 1; i <= nums.size(); i++)
    {
        if (mp[i] == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{
    return 0;
}