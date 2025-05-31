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
ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* cur=head;
        while(cur){
            ListNode* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        return prev;
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
         if (!head || k == 1) return head;

         ListNode* temp=head;
            ListNode* prev=nullptr;
         while(temp!=nullptr){

            ListNode* kth=temp;
            for(int i=1;i<k && kth;i++){
                kth=kth->next;
            }
            if(kth==nullptr){
                if(prev) prev->next=temp;
                break;
            }
            ListNode* nextnode=kth->next;
            kth->next=nullptr;
            reverseList(temp);
            if(temp==head){
                head=kth;
            }
            else{
                prev->next=kth;
            }
            prev=temp;
            temp=nextnode;
         }
         return head;
    }
};