#include <bits/stdc++.h>
using namespace std;
//LeetCode Easy 796;
bool rotateString(string s, string goal)
{
    int ss = s.size();
    int gs = goal.size();
    if (ss != gs)
    {
        return false;
    }
    for (int i = 0; i < ss; i++)
    {
        if (s == goal)
        {
            return true;
        }
        s += s[0];
        s.erase(0, 1);
    }
    return false;
}
// Input: s = "abcde", goal = "cdeab"
// Output: true