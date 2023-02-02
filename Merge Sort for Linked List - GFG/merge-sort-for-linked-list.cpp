//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* merge(Node* l1, Node* l2) {
        Node* dummy = new Node(-1);
        Node* curr = dummy;
        while(l1 != NULL && l2 != NULL) {
            if(l1->data < l2->data) {
                curr->next = l1;
                l1 = l1->next;
                curr = curr->next;
            }
            else {
                curr->next = l2;
                l2 = l2->next;
                curr = curr->next;
            }
        }
        if(l1 != NULL) {
            curr->next = l1;
        }
        if(l2 != NULL) {
            curr->next = l2;
        }
        return dummy->next;
    }
    
    Node* mergeSort(Node* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        // your code here
        Node* slow = head;
        Node* fast = head;
        Node* temp = NULL;
        while(fast != NULL && fast->next != NULL) {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        Node* l1 = mergeSort(head);
        Node* l2 = mergeSort(slow);
        return merge(l1, l2);
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends