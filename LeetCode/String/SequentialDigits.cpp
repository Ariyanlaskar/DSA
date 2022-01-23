#include <bits/stdc++.h>
using namespace std;
vector<int> sequentialDigits(int low, int high)
{
    string s = "123456789";
    vector<int> ans;
    int l = to_string(low).size();
    int h = to_string(high).size();
    for (int i = l; i <= h; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            int nums = stoi(s.substr(j, i));
            if (nums >= low && nums <= high)
            {
                ans.push_back(nums);
            }
        }
    }
    return ans;
}
// Input: low = 100, high = 300
// Output: [123,234]