#include <bits/stdc++.h>
using namespace std;
string addBinary(string a, string b)
{
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    string res = "";
    while (i >= 0 && j >= 0)
    {
        if (a[i] == '0' && b[j] == '0')
        {
            if (carry)
            {
                res += "1";
                carry = 0;
            }
            else
            {
                res += "0";
            }
        }
        else if ((a[i] == '1' && b[j] == '0') || (a[i] == '0' && b[j] == '1'))
        {
            if (carry)
            {
                res += "0";
                carry = 1;
            }
            else
            {
                res += "1";
            }
        }
        else
        {
            if (carry)
            {
                res += "1";
                carry = 1;
            }
            else
            {
                res += "0";
                carry = 1;
            }
        }
        i--;
        j--;
    }
    while (i >= 0)
    {
        if (carry)
        {
            if (a[i] == '0')
            {
                res += "1";
                carry = 0;
            }
            else
            {
                res += "0";
                carry = 1;
            }
        }
        else
        {
            if (a[i] == '0')
            {
                res += "0";
            }
            else
            {
                res += "1";
            }
        }
        i--;
    }
    while (j >= 0)
    {
        if (carry)
        {
            if (b[j] == '1')
            {
                res += "0";
                carry = 1;
            }
            else
            {
                res += "1";
                carry = 0;
            }
        }
        else
        {
            if (b[j] == '1')
            {
                res += "1";
            }
            else
            {
                res += "0";
            }
        }
        j--;
    }
    if (carry)
    {
        res += "1";
    }
    reverse(res.begin(), res.end());
    return res;
}
// Input: a = "11", b = "1"
// Output: "100"