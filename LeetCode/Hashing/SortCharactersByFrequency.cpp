#include<bits/stdc++.h>
using namespace std;
string frequencySort(string s){
    string ans="";
    map<char,int>mp;
    priority_queue<pair<int,char>>maxheap;
    for(auto c:s){
        mp[c]++;
    }
    for(auto it:mp){
        maxheap.push(make_pair(it.second,it.first));
    }
    while(!maxheap.empty()){
        auto x=maxheap.top();
        maxheap.pop();
        while(x.first--){
            ans+=x.second;
        }
    }
    return ans;
}
int main(){
    string s = "cccaaa";   //"tree";
    cout<<frequencySort(s)<<endl;
    return 0;
}