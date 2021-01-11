//https://leetcode.com/problems/sum-of-left-leaves/

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
    // Initialize result
    int res = 0;
   bool isLeaf(TreeNode *node)
    {
   if (node == NULL)
       return false;
   if (node->left == NULL && node->right == NULL)
       return true;
   return false;
    }
    
    int sumOfLeftLeaves(TreeNode* root)
    {
 
    // Update result if root is not NULL
    if (root != NULL)
    {
       // If left of root is NULL, then add key of
       // left child
       if (isLeaf(root->left))
            res += root->left->val;
       else // Else recur for left child of root
           sumOfLeftLeaves(root->left);
 
       // Recur for right child of root and update res
       sumOfLeftLeaves(root->right);
    }
 
    // return result
    return res;
}
};
