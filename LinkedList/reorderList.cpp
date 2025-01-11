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
    void reorderList(ListNode* head){

            ListNode* first= head;
            ListNode* sec= head;

      //Get to the middle of the linked list
            while(sec && sec->next){
                first= first->next;
                sec= sec->next->next;
            }


      //Reverse the second half
            ListNode* node= first->next;
            ListNode* prev= nullptr;
            first->next= nullptr;
            while(node){
                ListNode* temp= node->next;
                node->next= prev;
                prev=node;
                node=temp;
            }

//Now insert each node from second half between first and second node in the first half
            first= head;
            sec= prev;

            while(sec){
                ListNode* t1 = first->next;
                ListNode* t2= sec->next;
                first->next= sec;
                sec->next= t1;
                first= t1;
                sec= t2;
            }

            
        
    }
};
