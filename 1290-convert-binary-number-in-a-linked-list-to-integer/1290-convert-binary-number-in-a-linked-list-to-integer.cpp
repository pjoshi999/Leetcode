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
    int getlength(ListNode* head) {
        int count = 0;
        while(head != NULL) {
            count++;
            head = head->next;
        }
        return count;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* curr = head;
        int len = getlength(head);
        int res = 0;
        while(curr != NULL) {
            len--;
            res += pow(2, len) * curr->val;
            curr = curr->next;
        }
        return res;
    }
};