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
    ListNode* rotateRight(ListNode* head, int k) {
                if (!head || !head->next || k == 0) return head;
        ListNode* prev=head;
        ListNode* curr=head;
        int i=1;
        while(curr->next){
            curr=curr->next;
            i++;
        }
        k=k%i;
        if(k==0) return head;
        int j=1;
        curr=head;
        
        while(curr->next){
            if(j>k) prev=prev->next;
            curr=curr->next;
            j++;
        }
        ListNode* temp=head;
        temp=prev->next;
        prev->next=nullptr;
        curr->next=head;
        return temp;
    }
};