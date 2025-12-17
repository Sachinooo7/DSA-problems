/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {

    public ListNode reverse(ListNode head){
        ListNode prev=null;
        ListNode curr=head;
        while(curr!=null){
        ListNode next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    public void reorderList(ListNode head) {



        ListNode slow=head;
        ListNode fast=head.next;

        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        
    }

    ListNode sec=reverse(slow.next);
    slow.next=null;
    ListNode fir=head;

        while(sec!=null){

            ListNode n1=fir.next;
            ListNode n2=sec.next;
        
            fir.next=sec;
            sec.next=n1;

            fir=n1;
            sec=n2;
        }

    }
}