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

int fun(TreeNode* root, bool &isBal){
     if(!root)
       return 0;
    int lh = fun(root->left,isBal);
    int rh = fun(root->right,isBal);
    if(abs(rh-lh)>1)
      isBal = false;
    return 1+max(lh,rh);
}
    bool isBalanced(TreeNode* root) {
        bool isBal = true;
         fun(root,isBal);
        return isBal;
    }
};
