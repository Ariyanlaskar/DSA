#include<bits/stdc++.h>
using namespace std;
int maxEvents(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int count=0;
        int i=0;
        int n=arr.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int d=1;d<=100000;d++){
            while(!pq.empty() && pq.top()<d){
                pq.pop();
            }
            while(i<n && arr[i][0]==d){
                pq.push(arr[i][1]);
                i++;
            }
            if(pq.size()>0){
                pq.pop();
                count++;
            }
        }
        return count;
}
        
int main(){
    vector<vector<int>>arr={{1,4},{4,4},{2,2},{3,4},{1,1}};
    cout<<maxEvents(arr)<<endl;
    return 0;
}