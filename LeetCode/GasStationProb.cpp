#include<bits/stdc++.h>
using namespace std;
 int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int temp=0;
        int minValue=INT_MAX;
        int minIdx=0;
        int Sgas=0;
        int Scost=0;
        for(int i=0;i<cost.size();i++){
            temp += gas[i]-cost[i];
            if(temp<minValue){
                minIdx=i;
                minValue=temp;
            }
            Sgas += gas[i];
            Scost += cost[i];
        }
        if(Sgas<Scost){
            return -1;
        }
        if(minIdx==gas.size()-1){
            return 0;
        }
        return minIdx+1;
    }
int main(){
    vector<int>gas={1,2,3,4,5};
    vector<int>cost={3,4,5,1,2};
    cout<<canCompleteCircuit(gas,cost);

    return 0;
}