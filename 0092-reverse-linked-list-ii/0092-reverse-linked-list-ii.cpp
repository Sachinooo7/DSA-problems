// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         ListNode* start=head;
//         ListNode* end;
//         if(!head || left==right) return head;

//         int d=right-left;
//         ListNode* temp=head;
//         ListNode* prev=nullptr;
//         ListNode* curr;
        
//         while(left>1){
//             start=temp;
//             temp=temp->next;
//             left--;
//         }
//         prev=start;
//         curr=temp;
//         while(d>=0){
//             ListNode* demo=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=demo;
//             d--;
//         }
//         temp->next=curr;
//         start->next=prev;
//         return head;

//     }
// };


class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        // Move `prev` to the node before the reversing starts
        for (int i = 1; i < left; ++i) {
            prev = prev->next;
        }

        // `curr` is the first node to be reversed
        ListNode* curr = prev->next;
        // Reverse the sublist between left and right
        for (int i = 0; i < right - left; ++i) {
            ListNode* temp = curr->next;
            curr->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }

        return dummy.next;
    }
};
