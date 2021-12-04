#include <bits/stdc++.h>
using namespace std;
class trie
{
public:
    trie *child[26];
    bool is_end = false;
};

public:
trie *root;
StreamChecker(vector<string> &words)
{
    root = new trie();
    for (string s : words)
    {
        trie *curr = root;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            char ch = s[i];
            if (curr->child[ch - 'a'] == NULL)
            {
                curr->child[ch - 'a'] = new trie();
            }
            curr = curr->child[ch - 'a'];
        }
        curr->is_end = true;
    }
}
string str = "";
bool query(char letter)
{
    str.push_back(letter);
    trie *curr = root;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        char ch = str[i];
        curr = curr->child[ch - 'a'];
        if (curr == NULL)
        {
            return false;
        }
        if (curr->is_end)
        {
            return true;
        }
    }
    return false;
}
// Input
// ["StreamChecker", "query", "query", "query", "query", "query", "query", "query", "query", "query", "query", "query", "query"]
// [[["cd", "f", "kl"]], ["a"], ["b"], ["c"], ["d"], ["e"], ["f"], ["g"], ["h"], ["i"], ["j"], ["k"], ["l"]]
// Output
// [null, false, false, false, true, false, true, false, false, false, false, false, true]