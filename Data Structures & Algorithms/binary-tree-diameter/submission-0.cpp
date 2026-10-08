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

int fun(TreeNode*root,int &mx){
    if(!root)
      return 0;
    int lh = fun(root->left,mx);
    int rh = fun(root->right,mx);
    mx = max(mx,lh+rh);
    return 1+max(lh,rh);

}
    int diameterOfBinaryTree(TreeNode* root) {
        int mx = 0;
         fun(root,mx);
         return mx;
    }
};
