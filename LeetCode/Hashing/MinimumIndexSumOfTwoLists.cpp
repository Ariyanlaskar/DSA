#include <bits/stdc++.h>
using namespace std;
vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
{
    vector<string> ans;
    int idx = INT_MAX;
    unordered_map<string, int> mp;
    for (int i = 0; i < list1.size(); i++)
    {
        mp[list1[i]] = i + 1;
    }
    for (int i = 0; i < list2.size(); i++)
    {
        if (mp[list2[i]] != 0)
        {
            idx = min(idx, mp[list2[i]] + i);
        }
    }
    for (int i = 0; i < list2.size(); i++)
    {
        if (mp[list2[i]] != 0 && mp[list2[i]] + i == idx)
        {
            ans.push_back(list2[i]);
        }
    }
    return ans;
}
// Input: list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"]
// Output: ["Shogun"]