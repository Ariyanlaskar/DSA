#include <bits/stdc++.h>
using namespace std;
bool detectCapitalUse(string word)
{
    if (word.size() == 1)
    {
        return true;
    }
    bool capital = false;
    bool small = false;
    if (word[0] >= 'a' && word[0] <= 'z')
    {
        small = true;
    }
    for (int i = 1; i < word.size(); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            small = true;
        }
        else
        {
            capital = true;
        }
    }
    if ((capital && !small) || (!capital && small))
    {
        return true;
    }
    return false;
}
//Input: word = "USA"
// Output: true