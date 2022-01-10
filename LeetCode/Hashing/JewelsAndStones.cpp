#include <bits/stdc++.h>
using namespace std;
int numJewelsInStones(string jewels, string stones)
{
    unordered_map<int, int> mp;
    for (auto i : jewels)
    {
        mp[i]++;
    }
    int countJewels = 0;
    for (auto i : stones)
    {
        if (mp[i] != 0)
        {
            countJewels++;
        }
    }
    return countJewels;
}
// Input: jewels = "aA", stones = "aAAbbbb"
// Output: 3