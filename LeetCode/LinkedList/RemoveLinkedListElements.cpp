//LeetCode Easy 203;
#include<bits/stdc++.h>
using namespace std;
ListNode* removeElements(ListNode* head, int val) {
    ListNode* curr=head;
    if(head==NULL){
        return NULL;
    }
    while(curr!=NULL && curr->next!=NULL){
        if(curr==head && curr->val==val){
            head=head->next;
            curr=curr->next;
        }
        else if(curr->next->val==val){
            curr->next=curr->next->next;
        }
        else{
            curr=curr->next;
        }
    }
    if(head->val==val){
        head=head->next;
    }
    return head;
}
