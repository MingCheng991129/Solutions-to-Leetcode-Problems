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
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> arr;
        if (root == NULL)
            return arr;
        post(root, arr);
        return arr;
    }
    void post(TreeNode * root, vector <int> & arr) {
        if (root == NULL)
            return;
        post(root -> left, arr);
        post(root -> right, arr);
        arr.push_back(root -> val);
        return;
    }
};
