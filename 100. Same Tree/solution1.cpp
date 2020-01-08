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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector <int> arr1, arr2;
        traverse(p, arr1);
        traverse(q, arr2);
        // if (!(arr1.empty() && arr2.empty())) 
        if (arr1.empty()) {
            if (arr2.empty())
                return true;
            else
                return false;
        }
        if (arr2.empty())
            if (!arr1.empty())
                return false;
        
        if (arr1.size() != arr2.size())
            return false;
        
        if (!(leftHeight(p) == leftHeight(q) && rightHeight(p) == rightHeight(q)))
            return false;
            
        bool flag = true;
        
        // for (int i = 0; i < arr1.size(); i ++) {
        //     cout << arr1[i] << ' ';
        // }
        // cout << endl;
        // for (int i = 0; i < arr2.size(); i ++) {
        //     cout << arr2[i] << ' ';
        // }
        
        for (int i = 0; i < arr1.size(); i ++) {
            // cout << arr1[i];
            // cout << arr2[i];
            if (arr1[i] != arr2[i]) {
                flag = false;
                break;
            }
        }
        return flag;
    }
    
    int leftHeight(TreeNode *root) {
        // vector <int> arr;
        int leftHeight = 0;
        while (root != NULL) {
            leftHeight ++;
            root = root -> left;
        }
        return leftHeight;
    }
    
    int rightHeight(TreeNode *root) {
        // vector <int> arr;
        int rightHeight = 0;
        while (root != NULL) {
            rightHeight ++;
            root = root -> right;
        }
        return rightHeight;
    }
    
    void traverse(TreeNode *root, vector <int> & arr) {
        // vector <int> arr;
        if (root == NULL) {
            arr.push_back(-1);
            return;

        }
        traverse(root -> left, arr);
        arr.push_back(root -> val);
        traverse(root -> right, arr);
    }
};
