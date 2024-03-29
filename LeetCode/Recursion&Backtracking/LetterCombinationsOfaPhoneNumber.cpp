#include <bits/stdc++.h>
using namespace std;
// vector<int> number;
// string seq = "";
// vector<string> ans;
// map<int, string> mp;
// vector<string> letterCombinations(string digits)
// {
//     mp[0] = "0";
//     mp[1] = "1";
//     mp[2] = "abc";
//     mp[3] = "def";
//     mp[4] = "ghi";
//     mp[5] = "jkl";
//     mp[6] = "mno";
//     mp[7] = "pqrs";
//     mp[8] = "tuv";
//     mp[9] = "wxyz";
//     int dig;
//     if (digits.size() == 0)
//     {
//         return ans;
//     }
//     else if (digits.size() > 0)
//     {
//         dig = stoi(digits);
//     }
//     while (dig)
//     {
//         number.push_back(dig % 10);
//         dig = dig / 10;
//     }
//     int n = number.size();
//     reverse(number.begin(), number.end());
//     findCombination(0, n);
//     return ans;
// }
// void findCombination(int start, int n)
// {
//     if (start == n)
//     {
//         ans.push_back(seq);
//         return;
//     }
//     for (auto it : mp[number[start]])
//     {
//         seq.push_back(it);
//         findCombination(start + 1, n);
//         seq.pop_back();
//     }
// }

//  OR

void solve(string digits, vector<string> arr, int index, string s, vector<string> &ans)
{
    if (index >= digits.size())
    {
        ans.push_back(s);
        return;
    }
    int number = digits[index] - '0';
    for (int i = 0; i < arr[number].length(); i++)
    {
        s.push_back(arr[number][i]);
        solve(digits, arr, index + 1, s, ans);
        s.pop_back();
    }
}
vector<string> letterCombinations(string digits)
{

    if (digits.length() == 0)
    {
        return {};
    }
    vector<string> arr = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int index = 0;
    string s;
    vector<string> ans;
    solve(digits, arr, index, s, ans);
    return ans;
}

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

// Input: digits = "2"
// Output: ["a","b","c"]