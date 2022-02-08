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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;
        while(temp){
            if((temp->next) && (temp->next->val == temp->val)){
                ListNode *old = temp->next;
                temp->next = temp->next->next;
                delete old;
            } else 
                temp = temp->next;
        }
        return head;
    }
};