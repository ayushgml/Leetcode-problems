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
    public ListNode mergeNodes(ListNode head) {
        ListNode newList = new ListNode(0);
        ListNode newHeader=newList;
        head=head.next;
        int sum = 0;
        while(head!=null){
            if(head.val==0 && head.next!=null){
                newList.val+=sum;
                newList.next = new ListNode(0);
                newList=newList.next;
                sum=0;
            }else if(head.val==0 && head.next==null){
                newList.val+=sum;
                newList=newList.next;
                sum=0;
            }else{
                sum+=head.val;
            }
            head=head.next;
        }
        return newHeader;
    }
}