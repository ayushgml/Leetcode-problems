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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;        
        ListNode* temp1 = NULL;
        ListNode* temp2 = head;
        ListNode* temp3 = head->next;
        while(temp2 && temp3){
            if(!temp1){
                temp2->next=temp3->next;
                temp3->next=temp2;
                head=temp3;
                temp1=temp2;
                temp2=temp2->next;
            }
            else{
                temp1->next=temp3;
                temp2->next=temp3->next;
                temp3->next=temp2;
                temp1=temp2;
                temp2=temp2->next;
            }
            if(temp2)
                temp3=temp2->next;
        }
        return head;
    }
};