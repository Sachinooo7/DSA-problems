
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         
        priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>> pq;

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        for(int i = 0; i < lists.size(); i++){
            if(lists[i]){
                pq.push({lists[i]->val,lists[i]});
            }
        }

        while(!pq.empty()){

            pair<int,ListNode*> p = pq.top();
            temp->next = p.second;
            pq.pop();

            if(p.second->next){
                pq.push({p.second->next->val,p.second->next});
            }

            temp = temp->next;
        }

        return dummy->next;
    }
};