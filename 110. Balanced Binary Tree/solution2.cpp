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

    bool isBalanced(TreeNode* root) {
        if (checkHeight(root) == -1)
            return false;
        return true; 
        
    }
    
    int checkHeight(TreeNode * root) {
        if (root == NULL)
            return 0;
        
        int left = checkHeight(root -> left);
        int right = checkHeight(root -> right);
        
        // return early, don't need to get the depth of the tree when not balanced
        if (left == -1 || right == -1) 
            return -1;
        
        int diff = abs(left - right);
        if (diff > 1)
            return -1;
        
        return 1 + max(checkHeight(root -> left), checkHeight(root -> right));
    }
    
   
};
