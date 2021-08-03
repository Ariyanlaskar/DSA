#include<iostream>
using namespace std;

bool pairsum(int a[],int key,int n)
{
    int low=0;
    int high=n;
    while(low<high){
        if(a[low]+a[high]==key){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low]+a[high]>key){
            high--;
        }
        else{
            low++;
        }
    }

    return false;
}
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key;
    cin>>key;

    cout<<pairsum(a,key,n)<<endl;

    return 0;
}