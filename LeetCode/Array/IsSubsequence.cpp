//LeetCode Easy 329;
#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    if (s.size() == 0 && t.size() >= 0)
    {
        return true;
    }
    else if (t.size() == 0 && s.size() > 0)
    {
        return false;
    }
    int n1 = s.size();
    int n2 = t.size();
    int i = 0, j = 0;
    while (j < n2)
    {
        if (s[i] == t[j])
        {
            i++;
        }
        if (i == s.size())
        {
            return true;
        }
        j++;
    }
    return false;
}
int main()
{
    string s = "abc" , t = "ahbgdc";
    cout<<isSubsequence(s,t)<<endl;
    return 0;
}
// Output: true