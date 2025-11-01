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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

                unordered_set<int> mapp(nums.begin(), nums.end());

        ListNode* temp=new ListNode(0);
        temp->next=head;
        ListNode* node=temp;

        while(node->next){
            if(mapp.count(node->next->val)){
                node->next=node->next->next;
            }
            else
            node=node->next;
        }
        return temp->next;
        
    }
};