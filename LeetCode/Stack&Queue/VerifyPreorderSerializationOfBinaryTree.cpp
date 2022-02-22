#include <bits/stdc++.h>
using namespace std;
bool isValidSerialization(string p)
{
    if (p[p.size() - 1] != '#')
    {
        return false;
    }
    int comma = 0, hsCount = 0;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == ',')
        {
            comma++;
        }
        else if (p[i] == '#')
        {
            hsCount++;
        }
    }
    if (comma == 1)
    {
        return false;
    }
    if (comma == 3)
    {
        if (hsCount == 2)
        {
            return true;
        }
        return false;
    }
    int numCount = 0;
    hsCount = 0;
    for (int i = 0; i < p.size() - 1; i++)
    {
        if (p[i] == ',')
        {
            continue;
        }
        string s = "";
        while (p[i] != ',')
        {
            s += (p[i]);
            i++;
        }
        if (numCount == 0 && s == "#")
        {
            return false;
        }
        if (s == "#")
        {
            numCount--;
        }
        else
        {
            numCount++;
        }
    }
    return numCount == 0;
}
// Input: preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#"
// Output: true