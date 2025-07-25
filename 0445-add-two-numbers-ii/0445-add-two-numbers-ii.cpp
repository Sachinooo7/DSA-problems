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
        stack<int>stk1,stk2;

        int carry=0;

        
        while(l1!=nullptr){
            stk1.push(l1->val);
            l1=l1->next;
        }

        while(l2!=nullptr){
            stk2.push(l2->val);
            l2=l2->next;
        }
        ListNode* head=new ListNode(0);
        ListNode* temp=head;

        while(!stk1.empty() && !stk2.empty()){
            int n1=stk1.top(); stk1.pop();
            int n2=stk2.top(); stk2.pop();

            int sum=n1+n2+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* node=new ListNode(sum);
            temp->next=node;
            temp=node;
        }

        while(!stk1.empty()){
            int n=stk1.top(); stk1.pop();
            int sum=n+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* node=new ListNode(sum);
            temp->next=node;
            temp=node;
        }

          while(!stk2.empty()){
            int n=stk2.top(); stk2.pop();
            int sum=n+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* node=new ListNode(sum);
            temp->next=node;
            temp=node;
        }
        if(carry){
             ListNode* node=new ListNode(carry);
            temp->next=node;
            temp=node;
        }

        ListNode* prev=nullptr;
        ListNode* curr=head->next;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;

    }
};