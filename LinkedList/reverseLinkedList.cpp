// Recursive

ListNode* reverseList(ListNode* head) {
        
   if (head == NULL || head->next == NULL) return head;
        
        ListNode* newHead  = reverseList(head->next);
        
        head->next->next = head;
        head->next = NULL;
        
        return newHead ;
    }


//O(N)


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
     ListNode* reverseList(ListNode* head) {
   ListNode *tmp, *rev = NULL;
        
        while(head){
           
              tmp = head->next;
            
              head->next = rev;
              rev = head;
              head = tmp;
        }
              
        return rev;
    }
	

};
