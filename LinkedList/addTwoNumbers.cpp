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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
         ListNode* l2_head = l2;
        ListNode* l2_end = l2;
        int carry = 0;
        while(l1!=NULL&& l2!=NULL){
            l2->val = l2->val + l1->val + carry;
            if(l2->val>=10){
                carry = 1;
                l2->val-=10;
            }
            else {
                carry = 0;
            }
            l2_end = l2;
            l2 = l2->next;
            l1 = l1->next;
        }
        while(l1!=NULL){
            l1->val = l1->val + carry;
            if(l1->val>=10){
                carry = 1;
                l1->val-=10;
            }
            else {
                carry = 0;
            }
            l2_end->next = l1;
            l2_end = l2_end->next;
            l1 = l1->next;
        }
        
        while(l2!=NULL){
            l2->val = l2->val + carry;
            if(l2->val>=10){
                carry = 1;
                l2->val-=10;
            }
            else {
                carry = 0;
            }
            l2_end = l2;
            l2 = l2->next;
        }
        if(carry>0) l2_end->next = new ListNode(1);
        return l2_head;
        
        
    }
};
