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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode *temp =head;
        while(temp!=nullptr){
            temp=temp->next;
            c++;
        }
        int k = c - n + 1;
        ListNode *prev=nullptr, *curr=head;
        int i=1;
        while(i<=k && curr){
            if(i==k){
                if(!prev) head=curr->next;
                else prev->next = curr->next;
            }else prev=curr;
            curr=curr->next;
            i++;
        }
        return head;
    }
};