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

void fun(TreeNode* root, int maxSeen, int &cnt){
     if(!root)
      return;
     if(root->val>=maxSeen){
           cnt++;
           maxSeen = root->val;
     }
    
    fun(root->left,maxSeen,cnt);
    fun(root->right,maxSeen,cnt);
}
    int goodNodes(TreeNode* root) {
         int cnt = 0;
         fun(root,root->val,cnt);
         return cnt;
    }
};
