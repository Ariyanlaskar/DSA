#include<bits/stdc++.h>
using namespace std;
void maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        // vector<vector<int>>:: iterator it;
        for(auto it:events){
            for(auto i:it){
                cout<<i<<" ";
            }
            cout<<endl;
        }
}

int main(){
    vector<vector<int>>events={{1,4},{4,4},{2,2},{3,4},{1,1}};
    maxEvents(events);


    return 0;
}