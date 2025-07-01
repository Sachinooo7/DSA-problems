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

void solve(ListNode* head){

    ListNode* prev=nullptr;
    ListNode* curr=head;

    while(curr!=nullptr){
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        }
    
}
    ListNode* reverseKGroup(ListNode* head, int k) {

        int c=0;
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp!=nullptr){
            ListNode* kth=temp;
            for(int i=1;i<k && kth;i++){
                kth=kth->next;
            }
            if(kth==nullptr){
                if(prev)
                prev->next=temp; break;
            }
            ListNode* nth=kth->next;
            kth->next=nullptr;
            solve(temp);
            if(temp==head){
                head=kth;
            }
            else{
                prev->next=kth;
            } 
            prev=temp;
             temp=nth;
        }
        return head;
    }
};