class Solution {

    private ListNode reverse(ListNode head) {
        ListNode prev = null, curr = head;
        while (curr != null) {
            ListNode next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    public ListNode reverseEvenLengthGroups(ListNode head) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;

        ListNode prevGroupEnd = dummy;
        ListNode curr = head;

        int groupSize = 1;

        while (curr != null) {
            // find actual group length
            int count = 0;
            ListNode groupStart = curr;

            while (count < groupSize && curr != null) {
                curr = curr.next;
                count++;
            }

            // if even length → reverse
            if (count % 2 == 0) {
                ListNode nextGroup = curr;

                // detach group
                ListNode temp = groupStart;
                for (int i = 1; i < count; i++) temp = temp.next;
                temp.next = null;

                // reverse group
                ListNode newHead = reverse(groupStart);

                // connect back
                prevGroupEnd.next = newHead;
                groupStart.next = nextGroup;

                prevGroupEnd = groupStart;
            } else {
                // move prevGroupEnd normally
                for (int i = 0; i < count; i++) {
                    prevGroupEnd = prevGroupEnd.next;
                }
            }

            groupSize++;
        }

        return dummy.next;
    }
}
