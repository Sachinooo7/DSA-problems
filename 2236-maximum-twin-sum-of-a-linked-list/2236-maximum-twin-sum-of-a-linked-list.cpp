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

ListNode* solve(ListNode*& head){
    ListNode* prev=nullptr;
    ListNode* curr=head;
    while(curr){
        ListNode* node=curr->next;
        curr->next=prev;
        prev=curr;
        curr=node;
    }
    return prev;
}
    int pairSum(ListNode* head) {


        ListNode* slow=head;
        ListNode* fast=head->next;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* temp=slow->next;
        slow->next=nullptr;
        ListNode* right=solve(temp);

        int mx=0;

        while(head && right && head!=right){
            mx=max(mx,head->val+right->val);
            head=head->next;
            right=right->next;
        }
        return mx;
        
    }
};