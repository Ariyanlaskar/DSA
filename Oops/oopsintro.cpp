#include<iostream>
using namespace std;
class binary{
    string s;
    public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
};
void binary :: read(){
    cout<<"enter the binary number"<<endl;
    cin>>s;
}
void binary :: chk_bin(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='1' && s.at(i)!='0'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}
void binary :: ones_compliment(){
    chk_bin();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }

        else{
            s.at(i)='1';
        }
    }
}
void binary :: display(){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}