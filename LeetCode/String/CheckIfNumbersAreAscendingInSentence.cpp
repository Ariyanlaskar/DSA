#include <bits/stdc++.h>
using namespace std;
bool areNumbersAscending(string s)
{
    int n = s.size();
    vector<string> arr;
    string temp;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= '0' and s[i] <= '9' and (s[i + 1] != ' ' || i + 1 != n))
        {
            temp += s[i];
            continue;
        }
        if (temp != "")
        {
            arr.push_back(temp);
            temp = "";
        }
    }
    if (temp != "")
    {
        arr.push_back(temp);
    }
    for (int i = 1; i < arr.size(); i++)
    {
        if (stoi(arr[i]) <= stoi(arr[i - 1]))
        {
            return false;
        }
    }
    return true;
}

// Input: s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles"
// Output: true