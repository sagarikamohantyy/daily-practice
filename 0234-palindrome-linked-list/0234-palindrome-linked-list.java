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
    public boolean isPalindrome(ListNode head) {
        ListNode slow=head;
        ListNode fast=head;

        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        ListNode prev=null;
        ListNode curr=head;

        while(curr!=slow){
            ListNode next=curr.next; 
            curr.next=prev;
            prev=curr;
            curr=next;
        }

        ListNode second=slow;
        if(fast!=null){
            second=slow.next;
        }

        while(prev!=null && second!=null){
            if(prev.val!=second.val)
                return false;

            prev=prev.next;
            second=second.next;
        }

        return true;
    }
}