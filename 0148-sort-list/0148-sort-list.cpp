/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

ListNode* merge(ListNode* left,ListNode* right){

    ListNode* dummy=new ListNode(-1);
    ListNode* temp=dummy;
    while(left && right){
        if(left->val < right->val){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    if(left){
        temp->next=left;
    }
    else  temp->next=right;
    
    return dummy->next;
}

ListNode* findmid(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

ListNode* divide(ListNode* head){

    if(!head || !head->next) return head;

    ListNode* mid=findmid(head);
    ListNode* left=head;
    ListNode* right=mid->next;
    mid->next=nullptr;
   left= divide(left);
    right=divide(right);
    return merge(left,right);
}
    ListNode* sortList(ListNode* head) {

        return divide(head);
        
    }
};


