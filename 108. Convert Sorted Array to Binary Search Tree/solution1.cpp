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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
//         if (nums.empty())
//             return NULL;
//         int mid = nums.size() / 2;
//         TreeNode* root = new TreeNode(nums[mid]), *left_ = new TreeNode(0), *right_ = new TreeNode(0);
//         left_ = root;
//         right_ = root;
//         // cout << left_ -> val << ' ' << right_ -> val;

//         for (int i = mid - 1; i >= 0; i --) {
//             // TreeNode * left_node = new TreeNode(num[i]);
//             left_ -> left = new TreeNode(nums[i]);
//             left_ = left_ -> left;
//             // root -> left;
//         }
//         for (int i = mid + 1; i < nums.size(); i ++) {
//             right_ -> right = new TreeNode(nums[i]);
//             right_ = right_ -> right;
//         }
//         return root;
        
        if (nums.empty())
            return NULL;
        return createTree(0, nums.size() - 1, nums);
        
    }
    
    TreeNode* createTree(int left, int right, vector <int> & nums) {
        int len = right - left + 1;
        if (len <= 0)
            return NULL;
        int mid = len / 2;
        TreeNode * root = new TreeNode(nums[left + mid]);
        
        root -> left = createTree(left, left + mid - 1, nums);
        root -> right = createTree(left + mid + 1, right, nums);
        
        return root;
    }
};
