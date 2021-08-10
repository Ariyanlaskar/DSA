#include<iostream>
using namespace std;

void subascii(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);

    subascii(ros,ans);
    subascii(ros,ans+ch);
    subascii(ros,ans+ to_string(code));
}

int main(){

    subascii("AB","");
    return 0;
}