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

void fun(TreeNode * root, vector<int>&ans, int level){
    if(!root)
      return;
    if(ans.size()==level)
       ans.push_back(root->val);
    fun(root->right,ans,level+1);
    fun(root->left,ans,level+1);
    return;
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root)
           return ans;
        int level = 0;
         fun(root,ans,level);
         return ans;
    }
};
