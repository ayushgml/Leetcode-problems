/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        while(temp1)
        {
            ListNode* temp2=headB;
            while(temp2)
            {
                if(temp2==temp1)
                    return temp1;
                temp2=temp2->next;
            }
            temp1=temp1->next;
        }
        return nullptr;
    }
};