https://leetcode.com/problems/minimum-depth-of-binary-tree/

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
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int ans = 0;
        queue<TreeNode*> a;
        a.push(root);
        while(a.size()!=0)
        {
        ans++;
        int s = a.size();
      
            while(s--)
            {
                TreeNode* node = a.front();
                a.pop();
                if(!node->left && !node->right) 
                    return ans;
                if(node->left) 
                    a.push(node->left);
                if(node->right) 
                    a.push(node->right);

            }
        }
     //since the main return is inside loop ,we are returning here again as return type is int.
        return ans;
        //or
        //return -1;
    }
    
};
