#include <bits/stdc++.h>
using namespace std;
string largestNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end(), [&](int &a, int &b)
         {
             string s1 = to_string(a);
             string s2 = to_string(b);
             return s1 + s2 > s2 + s1;
         });
    string ans = "";
    for (int i = 0; i < nums.size(); i++)
    {
        string s = to_string(nums[i]);
        ans += s;
    }
    if (ans[0] == '0')
    {
        return "0";
    }
    return ans;
}
int main()
{
    vector<int>nums ={3,30,34,5,9};
    cout<<largestNumber(nums)<<endl;
    return 0;
}
// Output: "9534330"