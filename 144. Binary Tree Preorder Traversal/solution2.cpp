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
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> res;
        if (root == NULL)
            return res;
        
        stack <TreeNode *> stk;
        stk.push(root);
        while (!stk.empty()) {
            TreeNode * node = new TreeNode(0);
            node = stk.top();
            stk.pop();
            res.push_back(node -> val);
            if (node -> right != NULL)
                stk.push(node -> right);
            if (node -> left != NULL) 
                stk.push(node -> left);
        }
        return res;
    }
};
