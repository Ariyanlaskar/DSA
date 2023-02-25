#include <bits/stdc++.h>
using namespace std;
string replaceSpaces(string &str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

// Input : Coding Ninjas Is A Coding Platform
// Output : Coding@40Ninjas@40Is@40A@40Coding@40Platform