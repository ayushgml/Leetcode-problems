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
        ListNode *prev=nullptr, *curr=head;
        int i=1;
        while(i<=c - n + 1 && curr){
            if(i==c - n + 1){
                if(!prev) head=curr->next;
                else{
                    prev->next = curr->next;
                    break;
                }
            }else prev=curr;
            curr=curr->next;
            i++;
        }
        return head;
    }
};