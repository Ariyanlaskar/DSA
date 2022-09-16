#include <bits/stdc++.h>
using namespace std;
bool canReorderDoubled(vector<int> &arr)
{
    if (arr.size() % 2 != 0)
    {
        return false;
    }
    sort(arr.begin(), arr.end());
    vector<int> res;
    unordered_map<int, int> mp;
    for (auto i : arr)
    {
        mp[i]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]--;
        if (mp[arr[i]] >= 0)
        {
            if (mp[arr[i] * 2] > 0)
            {
                res.push_back(arr[i]);
                mp[arr[i] * 2]--;
            }
            else if (mp[arr[i] / 2] > 0 && arr[i] % 2 == 0)
            {
                res.push_back(arr[i]);
                mp[arr[i] / 2]--;
            }
        }
    }
    // if(res.size()==arr.size()/2){
    //     return true;
    // }
    // return false;
    return res.size() == arr.size() / 2 ? true : false;
}
// Input: arr = [4,-2,2,-4]
// Output: true