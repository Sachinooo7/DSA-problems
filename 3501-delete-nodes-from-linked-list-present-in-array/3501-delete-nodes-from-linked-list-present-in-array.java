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
    public ListNode modifiedList(int[] nums, ListNode head) {

        HashSet<Integer>mapp=new HashSet<>();

        for(int a:nums){
            mapp.add(a);
        }

        ListNode temp=new ListNode(0);
        temp.next=head;
        ListNode node=temp;

        while(node.next!=null){
            if(mapp.contains(node.next.val)){
                node.next=node.next.next;
            }
            else
            node=node.next;
        }
return temp.next;
        
        
    }
}