#include<iostream>
using namespace std;
string subs(string s,string ans){
    
    if(s.length()==0){
        cout<<ans<<endl;
        return "";
    }
    
    char ch=s[0];
    string ros=s.substr(1);
    
    subs(ros,ans);
    subs(ros,ans+ch);

}

int main(){

   
    cout<<subs("ABC","");
}