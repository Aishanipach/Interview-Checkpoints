/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
     Node* copyRandomList(Node* head) { 
	 //STEP 1
        if(!head) return NULL; 
        Node* temp = head;
        while(temp){ // while temp is not null
            Node* node = new Node(temp->val);
            node->next = temp->next; 
            temp->next = node;
            temp = node->next;
        }
		
		//Step 2
        temp = head; 
        while(temp){
            temp->next->random = (temp->random)?temp->random->next:NULL; 
            temp = temp->next->next; 
        }
		
		//Step 3
        Node* final = head->next;
        temp = head->next;
        while(head){ 
            head->next = temp->next;
            head = head->next; 
            if(!head) break; 
            temp->next = head->next; 
            temp = temp->next;
        }
        return final;
    }
};
