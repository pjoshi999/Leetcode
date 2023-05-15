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
    int getLength(ListNode* head) {
        int res = 0;
        while(head != NULL) {
            res++;
            head = head->next;
        }
        return res;
    }

    ListNode* swapNodes(ListNode* head, int k) {
        int n = getLength(head);
        ListNode* curr1 = head;
        ListNode* curr2 = head;
        for(int i=0; i<n-k; i++) {
            curr1 = curr1->next;
        }
        k--;
        while(k--) {
            curr2 = curr2->next;
        }
        swap(curr1->val, curr2->val);
        return head;
    }
};