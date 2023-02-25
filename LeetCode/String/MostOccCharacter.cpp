// Problem from GeeksforGeeks

#include <bits/stdc++.h>
using namespace std;
char getChar(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int n = ch - 'a';
        arr[n]++;
    }
    int max = -1, ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            ans = i;
        }
    }
    int fAns = 'a' + ans;
    return fAns;
}
int main()
{
    string s;
    cout << "enter your string" << endl;
    cin >> s;
    cout << getChar(s) << endl;
    return 0;
}

//    Input : 'text'
//    Output : t