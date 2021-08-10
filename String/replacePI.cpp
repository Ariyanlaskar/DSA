#include<iostream>
using namespace std;

string pirecur(string s){
    if(s.length()==0){
        return "";
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14"<<" ";
        pirecur(s.substr(2));
    }
    else{
        cout<<s[0];
        pirecur(s.substr(1));
    }
}

int main(){
    
string s;
getline(cin,s);
pirecur(s);
    return 0;
}