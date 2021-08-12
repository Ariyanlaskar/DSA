#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool isPalindrome(int num){
    int temp=num;
    int number=0;
    while(temp>0){
        number=number*10 + temp%10;
        temp=temp/10;
    }
    if(number==num){
        return true;
    }
    return false;
}

int findPalindromicSubarray(vector<int> arr,int k){
    int num=0;

    for(int i=0;i<k;i++){
        num=num*10 + arr[i];
    }
    if(isPalindrome(num)){
        return 0;
    }

    for(int i=k;i<arr.size();i++){
        // if(isPalindrome(num)){
        //     break;
        // }
        num=(num % (int)pow(10,k-1))*10+arr[i];
        if(isPalindrome(num)){
            return i-k+1;
        }

    }
    return -1;
}

int main(){
    vector<int>arr={2,3,5,1,1,5};
    int k=4;

    int ans=findPalindromicSubarray(arr,k);
    // cout<<ans;
    if(ans==-1){
        cout<<"palindromic subarray doesn't exist "<<endl;
    }
    else{
        for(int i=ans;i<ans+k;i++){

            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}