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
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* demo=new ListNode();
        ListNode* temp=demo;
        while(head){
            if(head->val!=val){
                ListNode* node=new ListNode(head->val);
                temp->next=node;
                temp=node;
            }
            head=head->next;
        }
        return demo->next;
        
    }
};