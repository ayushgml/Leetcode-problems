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
    public int pairSum(ListNode head) {
        ListNode mid = middle(head);
        ListNode last = reverse(mid);
        ListNode curr = head;
        int twinSum = 0;
        while(last!=null){
            twinSum = Math.max(twinSum,last.val+curr.val);
            last=last.next;
            curr=curr.next;
        }
        return twinSum;
    }
    
    public ListNode middle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;
    }
    
    public ListNode reverse(ListNode head) {
        ListNode curr=head, prev=null;
        while(curr!=null){
            ListNode temp = curr.next;
            curr.next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
}