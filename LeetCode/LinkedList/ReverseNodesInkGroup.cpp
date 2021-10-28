//Function only (Solution);
#include<bits/stdc++.h>
using namespace std;
ListNode* reverseKGroup(ListNode* head, int k) {
        
    ListNode *prevptr = NULL;
    ListNode *currptr = head;
    ListNode *nextptr;
    int counter = 0;
    ListNode* temp=currptr;
    ListNode* nexthead=head;
    for(int i=0;i<k;i++){
        if(nexthead==NULL){
            return head;
        }
        nexthead=nexthead->next;
    }
    while (currptr != NULL && counter < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr; //this line change the pointer from 1 "->" 2 to 1 "<-" 2

        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }
    if (nextptr != NULL)
    {
        head->next = reverseKGroup(nextptr, k);
    }
    return prevptr;
}
int main(){
    return 0;
}