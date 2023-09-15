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
    void copyList(Node* head) {
        Node* temp = head;
        Node* n = head->next;
        while(temp != NULL) {
            Node* copy = new Node(temp->val);
            temp->next = copy;
            copy->next = n;
            temp = n;
            if(n != NULL) {
                n = n->next;
            }
        }
    }

    void handleRandom(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
            if(temp->random != NULL) {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }
    }

    Node* detach(Node* head) {
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        Node* temp = head;
        while(temp != NULL) {
            tail->next = temp->next;
            tail = temp->next;   // we can do tail = tail->next
            temp->next = tail->next;
            temp = tail->next;   // we can do temp = temp->next
        }
        return dummy->next;
    }
    
    Node* copyRandomList(Node* head) {
        if(head == NULL) {
            return NULL;
        }
        copyList(head);
        handleRandom(head);
        return detach(head);
    }
}; 