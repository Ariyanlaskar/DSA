//LeetCode Easy(409)
#include<bits/stdc++.h>
using namespace std;
 int longestPalindrome(string s) {
        int n=s.length();
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int count=0;
        
        map<char,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            if(mp.size()==1 && (it->second)%2!=0){
                count += it->second;
            }
            if((it->second)%2==0){
                count += it->second;
            }
            if(mp.size()>1 && it->second>2 && (it->second)%2!=0){
                count += it->second-1;
            }
        }
        
        if(n>count){
            return count+1;
        }
        return count;
    }
int main(){
    string s="abccccdd";//test cases ="a",  "bb",  "ccc",  "bananas"
    cout<<longestPalindrome(s)<<endl;

    return 0;
}