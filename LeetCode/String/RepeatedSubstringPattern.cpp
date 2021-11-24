//LeetCode Easy 459;
#include <bits/stdc++.h>
using namespace std;
bool repeatedSubstringPattern(string s)
{
    string str = s + s;
    string str2 = str.substr(1, 2 * s.size() - 2);
    if (str2.find(s) != -1)
    {
        return true;
    }
    return false;
}
int main()
{
    string s = "abcabcabcabc";
    cout<<repeatedSubstringPattern(s)<<endl;
    return 0;
}
// Output: true
// Explanation: It is the substring "abc" four times or the substring "abcabc" twice.