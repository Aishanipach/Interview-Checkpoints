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


// |1|-> |2|-> |4|
// |1|-> |3|-> |5|

// |dummy||temp|

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
 ListNode* dummy= new ListNode();
  ListNode* temp= dummy;
        while(list1!=nullptr && list2!=nullptr){
            cout<<"CHEDD"<<list1->val<<list2->val;
            if(list1->val <= list2->val){
                temp-> next= list1;
                temp=list1;
                list1=list1->next;
                }
            else {
                temp-> next= list2;
                temp=list2;
                list2=list2->next;
            }
            
        }

        if(list1!=nullptr) {
    
            temp->next=list1;

        }
        if(list2!=nullptr){
        
            temp->next=list2;
        }

        return dummy-> next;
        
       

    }
};
