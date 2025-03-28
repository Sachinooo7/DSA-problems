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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

if(!head || left==right) return head;
ListNode* dummy=new ListNode(0);
          dummy->next=head;
ListNode* Lprev=dummy;
for(int i=0;i<left-1;i++){
    Lprev=Lprev->next;
}

ListNode* curr=Lprev->next;
ListNode* mark=curr;
ListNode* prev=nullptr;
for(int i=0;i<=(right-left);i++){
    ListNode* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
}
Lprev->next=prev;
mark->next=curr;
return dummy->next;
    }
};


