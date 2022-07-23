//LeetCode Easy 696;
#include<bits/stdc++.h>
using namespace std;
// //TC - O(N);
// //SC - O(N);
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
// // TC - O(N);
// // SC - O(1);
// int countBinarySubstrings(string s){
//     int n=s.length();
//     int idx=0;
//     vector<int>grp(n);
//     grp[0]=1;
//     for(int i=1;i<n;i++){
//         if(s[i]!=s[i-1]){
//             idx++;
//             grp[idx]=1;
//         }
//         else{
//             grp[idx]++;
//         }
//     }
//     int ans=0;
//     for(int i=1;i<n;i++){
//         ans+=min(grp[i],grp[i-1]);
//     }
//     return ans;
// }

// Input: s = "00110011"
// Output: 6