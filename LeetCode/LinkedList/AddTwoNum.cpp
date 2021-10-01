//Only Function(without Implementing LinkedList);
#include<bits/stdc++.h>
using namespace std;
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum += carry;
            int rem=sum%10;
            carry=sum/10;
            ans->next=new ListNode(rem);
            ans=ans->next;
        }
        return temp->next;
    }
int main(){
    ListNode* l1 = {2,4,3};
    ListNode* l2 = {5,6,4};
    return 0;
}