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
    vector<int> res;
    
    void dfs(TreeNode* root, int parent) {
        parent = parent * 10 + root->val;
        if(root->left)
            dfs(root->left, parent);
        if(root->right)
            dfs(root->right, parent);
        if(root->left == NULL and root->right == NULL)
            res.push_back(parent);
    }
    
    int sumNumbers(TreeNode* root) {
        res.clear();
        res.resize(0);
        dfs(root, 0);
        int ans = 0;
        for(auto i: res)
            ans += i;
        return ans;
    }
};