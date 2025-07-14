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
ListNode* solve(ListNode* head){
    ListNode* prev=nullptr;
    ListNode* curr=head;
    while(curr){
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
    
}
    int getDecimalValue(ListNode* head) {
        int sum=0;
        int i=0;
        ListNode* temp=solve(head);
        while(temp){
            sum+=temp->val*pow(2,i);
            cout<<sum<<endl;
            i++;
            temp=temp->next;
        }
        return sum;
        
    }
};