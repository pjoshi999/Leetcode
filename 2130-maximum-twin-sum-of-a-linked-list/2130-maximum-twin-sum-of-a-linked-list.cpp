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

    int pairSum(ListNode* head) {
        int n = getLength(head);
        ListNode* curr = head;
        vector<int> v;
        while(curr != NULL) {
            v.push_back(curr->val);
            curr = curr->next;
        }
        int maxi = INT_MIN;
        for(int i=0; i<v.size()/2; i++) {
            maxi = max(maxi, v[i] + v[n-i-1]);
        }
        return maxi;
    }
};