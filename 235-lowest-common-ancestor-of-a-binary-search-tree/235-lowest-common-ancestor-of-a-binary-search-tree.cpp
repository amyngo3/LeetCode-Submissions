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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // compare p and q values with current nodes
        // p and q are between root node
        if(root->val <= p->val && root->val >= q->val)
            return root;
        // p and q are both less than root
        else if(p->val < root->val && q->val < root->val)
        // move left
            return lowestCommonAncestor(root->left, p, q);
        // p and q are both greater than root
        else if(p->val > root->val && q->val > root->val)
        // move right
            return lowestCommonAncestor(root->right, p, q);
        
        return root;
    }
};