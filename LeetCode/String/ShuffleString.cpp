#include <bits/stdc++.h>
using namespace std;
string restoreString(string s, vector<int> &indices)
{
    int size = s.size();
    vector<char> arr(size);
    for (int i = 0; i < size; i++)
    {
        arr[indices[i]] = s[i];
    }
    string ans = "";
    for (int i = 0; i < size; i++)
    {
        ans += arr[i];
    }
    return ans;
}

// Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
// Output: "leetcode"