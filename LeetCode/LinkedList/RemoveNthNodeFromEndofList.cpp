//Only Solution Function;
#include<bits/stdc++.h>
using namespace std;
ListNode* removeNthFromEnd(ListNode* head, int n) {
    int Count=0;
    ListNode* start=new ListNode();
    start->next=head;
    ListNode* fast=start;
    ListNode* slow=start;
    for(int i=1;i<=n;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return start->next;
}
int main(){
    return 0;
}