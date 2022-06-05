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
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null)
            return head;
        ListNode last = head;
        int size = 1;
        while(last.next!=null){
            last=last.next;
            size++;
        }
        last.next=head;
        k=size-(k%size)-1;
        int i=0;
        while(i<=k){
            head=head.next;
            last=last.next;
            i++;
        }
        last.next=null;
        return head;
    }
}