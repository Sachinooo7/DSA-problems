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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* l1=head;
        ListNode* l2=head->next;
       
      int sum=0;
       ListNode* res=new ListNode();
       ListNode* temp=res;

        while(l2!=nullptr){
            if(l2->val==0){
                while(l1!=l2){
                  sum+=l1->val;
                  l1=l1->next;
                }
                  ListNode* node=new ListNode(sum);
                  temp->next=node;
                  temp=node;
                  sum=0;
            }
                l2=l2->next;

        }
        res=res->next;
        return res;
    }
};