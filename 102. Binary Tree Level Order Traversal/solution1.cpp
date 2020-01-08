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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue <TreeNode* > q;
        vector <int> temp;
        vector <vector <int> > res;
        if (root == NULL)
            return res;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i ++) {
                int val = q.front() -> val;
                temp.push_back(val);
                // q.pop();
                if (q.front() -> left != NULL) {
                    q.push(q.front() -> left);
                }
                if (q.front() -> right != NULL) {
                    q.push(q.front() -> right);
                }
                q.pop();
            }
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
};
