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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector <int> arr;
        vector <vector <int> > res;
        if (root == NULL)
            return res;
        queue <TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            
            // q.pop();
            // cout << q.size();
            int size = q.size();
            for (int i = 0; i < size; i ++) {
                int val = q.front() -> val;
                // cout << val << ' ' << i << ' ';
                TreeNode * node = new TreeNode (0);
                node = q.front();
                arr.push_back(val);
                q.pop();
                
                if (node -> left != NULL)
                    q.push(node -> left);
                if (node -> right != NULL)
                    q.push(node -> right);

            }
            
            res.insert(res.begin(), arr);
            arr.clear();
        }
        return res;
    }
};
