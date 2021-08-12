#include<iostream>

using namespace std;
class student{
    string name;
    public:
    
    int age;
    bool gender;

    int setname(string s){
        name=s;
    }
    void getname(){
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"gender = ";
        cout<<gender<<endl;
    }
};

int main(){
    student arr[3];
    for(int i=0;i<3;i++){
        string s;
        cout<<"Name = ";
        cin>>s;
        arr[i].setname(s);
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"gender = ";
        cin>>arr[i].gender;
    }

    for(int i=0;i<3;i++){
        arr[i].printInfo();
        arr[i].getname();
    }

    
    return 0;
}