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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(!head) return head;
        ListNode* A=head;
        ListNode* B=head;
        
        int i=1;
        while(B->next!=nullptr){
            if(i>n) A=A->next;
            B=B->next;
            i++;
        }
        if(i-n<=0) {
            head=head->next;
            }
        else
        A->next=A->next->next;

        return head;
    }
};