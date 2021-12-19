#include <bits/stdc++.h>
using namespace std;
string decodeString(string s)
{
    stack<int> numberStack;
    stack<string> wordStack;
    int n = 0;
    string word = "";
    string Output = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            n = n * 10 + (s[i] - '0');
        }
        else if (isalpha(s[i]))
        {
            word += s[i];
        }
        else if (s[i] == '[')
        {
            wordStack.push(word);
            numberStack.push(n);
            word = "";
            n = 0;
        }
        else
        {
            int occ = numberStack.top();
            numberStack.pop();
            string s = wordStack.top();
            wordStack.pop();
            for (int i = 0; i < occ; i++)
            {
                s += word;
            }
            word = s;
        }
    }
    return word;
}
// Input: s = "3[a]2[bc]"
// Output: "aaabcbc"