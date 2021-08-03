#include<iostream>
using  namespace std;
void toh(int n,char rod1,char rod2,char rod3){
    if(n==0){
        return;
    }
    toh(n-1,rod1,rod3,rod2);
    cout<< n <<" "<<rod1<<"->"<<rod3<<endl;
    toh(n-1,rod2,rod1,rod3);
}
int main(){
    int n;
    char td1;
    char td2;
    char td3;
    cin>>n>>td1>>td2>>td3;
    toh(n,td1,td2,td3);


    return 0;
}