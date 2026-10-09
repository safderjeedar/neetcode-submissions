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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p==root || q==root || !root)
             return root;
        TreeNode * foundInLeft = lowestCommonAncestor(root->left,p,q);
         TreeNode * foundInRight = lowestCommonAncestor(root->right,p,q);
        if(foundInLeft && foundInRight)
           return root;
        if(foundInLeft)
          return foundInLeft;
        return foundInRight;
    }
};
