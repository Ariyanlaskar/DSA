#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int value,weight;
        cin>>value>>weight;
        v.push_back({value,weight});
    }
    int k;
    cin>>k;
    sort(v.begin(),v.end(),[&](vector<int>&a,vector<int>&b){
        return a[0]>b[0];
    });
    int sum=0;
    
    int ways=0;
    for(int i=0;i<n;i++){
        if(v[i][1]<k){
            k-=v[i][1];
            ways++;
            sum+=v[i][0];
            
        }
        else{
            double w=v[i][0]/v[i][1];
            sum+=w*k;
            k=0;
        }
    }
    cout<< ways <<endl;
    cout<<sum<<endl;
    
    return 0;
}