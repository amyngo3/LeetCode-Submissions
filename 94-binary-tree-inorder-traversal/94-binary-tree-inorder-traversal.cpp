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
    void helper(TreeNode* ptr, vector<int> &vect){
        // base case
        if(ptr == nullptr)
            return;
        // recursive call
        // operation
        helper(ptr->left, vect);
        vect.push_back(ptr->val);
        helper(ptr->right, vect);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        
        // empty tree
        if(root == nullptr)
            return result;
        
        TreeNode* ptr = root;
        helper(ptr, result);
        return result;
    }
};