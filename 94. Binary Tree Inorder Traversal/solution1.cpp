/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> res;
        TreeNode *p = root;
        stack <TreeNode *> stk;
        while (p || !stk.empty()) {
            while (p) {
                stk.push(p);
                p = p -> left;
            }
            // p == NULL
            p = stk.top();
            res.push_back(p -> val);
            stk.pop();
            p = p -> right;
        }
        return res;
    }
};
