//LeetCode Easy 696;
#include<bits/stdc++.h>
using namespace std;
int countBinarySubstrings(string s){
    int prev_grp=0;
    int curr_grp=1;
    int ans=0;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            ans+=min(prev_grp,curr_grp);
            prev_grp=curr_grp;
            curr_grp=1;
        }
        else{
            curr_grp++;
        }
    }
    return ans+min(prev_grp,curr_grp);
}
int main(){
    string s = "00110011";
    cout<<countBinarySubstrings(s)<<endl;
    return 0;
}