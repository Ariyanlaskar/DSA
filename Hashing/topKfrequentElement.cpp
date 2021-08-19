#include<bits/stdc++.h>
using namespace std;
void topK(vector<int>&a,int k){
    int n=a.size();
     map<int,int>freq;
    for(int i=0;i<n;i++){
        int freqSize=freq.size();
        if(freq[a[i]]==0 && k==freqSize)
            break;
        freq[a[i]]++;
    }
    map<int,int>:: iterator it;
    vector<pair<int,int>>ans;
    for(it=freq.begin();it!=freq.end();it++){
        if(it->second!=0){
            pair<int,int>p;
            p.first=it->second;
            p.second=it->first;
            ans.push_back(p);
        }
    }
    sort(ans.begin(),ans.end(),greater<pair<int,int>>());
    vector<pair<int,int>>:: iterator it1;
    for(it1=ans.begin();it1!=ans.end();it1++){
        cout<<it1->second<<" "<<it1->first<<" "<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    topK(a,k);

    
    return 0;
}