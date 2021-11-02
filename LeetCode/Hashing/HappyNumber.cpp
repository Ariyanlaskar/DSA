#include<bits/stdc++.h>
using namespace std;
bool isHappy(int n){
    unordered_map<int,int>mp;
    mp[n]++;
    while(true){
        int new_number=0;
        while(n>0){
            int curr=n%10;
            n=n/10;
            new_number+=pow(curr,2);
        }
        if(new_number==1){
            return true;
        }
        if(mp[new_number]==0){
            mp[new_number]++;
        }
        else{
            return false;
        }
        n=new_number;
    }
    return false;
}
int main(){
    int n=2;
    cout<<isHappy(n)<<endl;
    return 0;
}