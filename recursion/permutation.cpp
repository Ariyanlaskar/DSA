#include<iostream>
using namespace std;
void permu(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        string s=str.substr(0,i)+str.substr(i+1);
        permu(s,ans+ch);
    }
}

int main(){
    
permu("ABC","");

    return 0;
}