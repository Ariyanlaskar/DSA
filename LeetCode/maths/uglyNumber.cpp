//leetCode Easy;
#include<bits/stdc++.h>
using namespace std;
 bool isUgly(int n) {
    if(n<=0){
        return false;
    }
    bool flag=true;
    while(true){
        if(n%2==0){
            n=n/2;
            continue;
        }
        else if(n%3==0){
            n=n/3;
            continue;
        }
        else if(n%5==0){
            n=n/5;
            continue;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag==false && n>1){
        return false;
    }
    else{
        return true;
        }
    }
int main(){
    int n=6;
    
    return 0;
}