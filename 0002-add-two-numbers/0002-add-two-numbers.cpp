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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0;
        int sum=0;
        ListNode* node1=l1;
        ListNode* node2=l2;
        ListNode* head=new ListNode(0);
        ListNode* ans=head;

        while(node1!=nullptr && node2!=nullptr){
            sum=node1->val+node2->val+carry;
            carry=sum/10;
            ListNode* node=new ListNode(sum%10);
            // node.val=sum/10;
            ans->next=node;
            ans=ans->next;
            node1=node1->next;
            node2=node2->next;
        }
        while(node1!=nullptr){
            sum=node1->val+carry;
            carry=sum/10;
            // node->val=sum/10;
                        ListNode* node=new ListNode(sum%10);

            ans->next=node;
            ans=ans->next;
             node1=node1->next;

        }
         while(node2!=nullptr){
            sum=node2->val+carry;
            carry=sum/10;
            // node->val=sum/10;
                        ListNode* node=new ListNode(sum%10);

            ans->next=node;
            ans=ans->next;
            node2=node2->next;
        }
        if(carry){
            ListNode* node=new ListNode(carry);
            ans->next=node;
            ans=ans->next;
        }
        return head->next;

    }
};