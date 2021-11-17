#include <bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2)
{
    string s;
    int c = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    while (i >= 0 && j >= 0)
    {
        int sum = c + num1[i] - '0' + num2[j] - '0';
        c = sum / 10;
        sum %= 10;
        s.push_back(sum + '0');
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = c + num1[i] - '0';
        c = sum / 10;
        sum %= 10;
        s.push_back(sum + '0');
        i--;
    }
    while (j >= 0)
    {
        int sum = c + num2[j] - '0';
        c = sum / 10;
        sum %= 10;
        s.push_back(sum + '0');
        j--;
    }
    if (c)
    {
        string str = to_string(c);
        reverse(str.begin(), str.end());
        s += str;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    string num1 = "11", num2 = "123";
    cout<<addStrings(num1,num2)<<endl;
return 0;
}
// Output: "134"