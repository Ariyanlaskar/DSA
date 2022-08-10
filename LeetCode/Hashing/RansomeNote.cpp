#include <bits/stdc++.h>
using namespace std;
bool canConstruct(string ransomNote, string magazine)
{
    if (ransomNote.size() > magazine.size())
    {
        return false;
    }
    unordered_map<char, int> Ran, Mag;
    for (auto &c : magazine)
    {
        Mag[c]++;
    }
    for (auto &it : ransomNote)
    {
        if (Mag[it] == 0)
        {
            return false;
        }
        Mag[it]--;
    }
    return true;
}

// Input: ransomNote = "a", magazine = "b"
// Output: false