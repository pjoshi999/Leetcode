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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> s;
        while(head != NULL) {
            s.insert(head->val);
            head = head->next;
        }
        // for(auto it: s) {
        //     cout<<it<<endl;
        // }
        ListNode* newList = new ListNode(-1);
        ListNode* curr = newList;
        for(auto it: s) {
            ListNode* newNode = new ListNode(it);
            curr->next = newNode;
            curr = curr->next;
        }
        curr->next = NULL;
        return newList->next;
    }
};