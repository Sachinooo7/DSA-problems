/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        while(tempA!=tempB){

            tempB=tempB->next;
            tempA=tempA->next;
            if(tempA==tempB) return tempA;
            if(tempA==nullptr) tempA=headB;
            if(tempB==nullptr) tempB=headA;
        }
        return tempA;
    }
};