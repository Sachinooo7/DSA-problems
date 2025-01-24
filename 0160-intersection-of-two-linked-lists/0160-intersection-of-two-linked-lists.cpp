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
        unordered_map<ListNode*,bool>map;
        while(headA!=nullptr){
            map[headA]=1;
            headA=headA->next;
        }

         while(headB!=nullptr){
            if(map[headB]==1){
            return headB;
            }
            headB=headB->next;
        }
        return nullptr;
    }
};