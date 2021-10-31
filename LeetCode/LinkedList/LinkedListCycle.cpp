//LeetCode Easy 141;
//Only Solution
#include<bits/stdc++.h>
using namespace std;
bool hasCycle(ListNode *head) {
    ListNode* fast=head;
    ListNode* slow=slow;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}