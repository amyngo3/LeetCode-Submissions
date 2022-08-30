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
    /* example 
                    12
            6                   16
        3       8             14    20
                    10
    */
    int helper(TreeNode* root, int low, int high){
        // base case
        if(root == nullptr)
            return 0;
        // recursive call
        // operation
        // root in range
        if(root->val >= low && root->val <= high){
            return root->val + helper(root->left, low, high) + helper(root->right, low, high);
        }
        else if(root->val < low)  // root is less than low
            return helper(root->right, low, high);
        else // root is greater than high
            return helper(root->left, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        // do not have to visit all nodes
        // must visit low's node -- may have nodes greater than low but less then root (right of low)
        // must visit high's node -- left of low
        
        return helper(root, low, high);
    }
};