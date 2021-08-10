#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
void Tsum(int a[],int n,int target){
    int flag=false;
    
    for(int i=0;i<n;i++){
        int lo=i+1;
        int hi=n-1;
        while(lo<hi){
            int current=a[i]+a[lo]+a[hi];
            if(current==target){
                flag=true;
                cout<<i<<" "<<lo<<" "<<hi<<endl;
                break;
                
            }
            else if(current>target){
                hi--;
            }
            else{
                lo++;
            }
        }
    }
    if(flag){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int target;
    cin>>target;

    Tsum(a,n,target);

}