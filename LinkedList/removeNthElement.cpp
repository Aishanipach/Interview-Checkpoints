//remove nth element from behind

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
        
        
        ListNode* ptr1=head;    //slower pointer
        ListNode* ptr2=head;    //faster pointer
        ListNode* curr;
        int k=n;
        
        while(k){
            ptr2=ptr2->next;
            k--;
        }
        
        if(ptr2==NULL)
        {
            return head->next;
        }
        
        while(ptr2!=NULL && ptr2->next!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            
        }
        
        ptr1->next=ptr1->next->next;
        
    return head;
    }
};
