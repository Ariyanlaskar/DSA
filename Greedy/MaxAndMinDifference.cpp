#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    long long max=0;
    long long min=0;
    int s=(n/2);
    for(int i=0;i<s;i++){
        max += (a[i]-a[(n-1)-i]);
        min += (a[i*2]-a[i*2+1]);
    }
    cout<<max<<endl;
    cout<<min<<endl;

    
    return 0;
}