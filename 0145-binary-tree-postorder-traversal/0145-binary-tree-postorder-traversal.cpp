/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        // Using 1 stack
        vector<int> res;
        TreeNode* curr = root;
        stack<TreeNode*> st;
        while(curr != NULL || !st.empty()) {
            if(curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }
            else {
                TreeNode* temp = st.top()->right;
                if(temp == NULL) {
                    temp = st.top();
                    st.pop();
                    res.push_back(temp->val);
                    while(!st.empty() && temp == st.top()->right) {   // is it a right child
                        temp = st.top();
                        st.pop();
                        res.push_back(temp->val);
                    }
                }
                else {
                    curr = temp;
                }
            }
        }
        return res;
    }
};