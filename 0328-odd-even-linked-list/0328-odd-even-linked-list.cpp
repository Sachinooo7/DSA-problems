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
    ListNode* oddEvenList(ListNode* head) {

        if(!head || !head->next) return head;
        ListNode* fir=head;
        ListNode* second=head->next;
        ListNode* sec=second;

        while(sec && sec->next){
            fir->next=sec->next;
            fir=fir->next;

            sec->next=fir->next;
            sec=sec->next;

        }

        fir->next=second;
        return head;
        
    }
};