#include<iostream>
using namespace std;
string movex(string s){
    if(s.length()==0){
        return " ";
    }
    char ch=s[0];
    string sh=movex(s.substr(1));
    if(ch=='x'){
        return sh+ch;
    }
    else{
        return ch+sh;
    }
}

int main(){
    string s;
    getline(cin,s);
    cout<<movex(s)<<endl;

    return 0;
}