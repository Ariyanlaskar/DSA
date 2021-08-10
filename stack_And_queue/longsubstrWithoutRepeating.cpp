#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n=256;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=-1;
    }
    int maxlen=0;
    int start=-1;
    for(int i=0;i<s.size();i++){
        if(a[s[i]]>start){
            start=a[s[i]];
        }
        a[s[i]]=i;
        maxlen=max(maxlen,i-start);
    }
    cout<<maxlen<<endl;


    return 0;
}