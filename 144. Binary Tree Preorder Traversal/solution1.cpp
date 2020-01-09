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
        
        preorder(root, res);
        
        return res;
    }
    void preorder(TreeNode * root, vector <int> & arr) {
        if (root == NULL)
            return;
        int val = root -> val;
        arr.push_back(val);
        preorder(root -> left, arr);
        preorder(root -> right, arr);
        
    }
};
