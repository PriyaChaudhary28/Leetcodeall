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
    int getHeight(TreeNode* root){
        if(root==nullptr) return 0;
        
        int lh=getHeight(root->left);
        int rh=getHeight(root->right);
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        int leftheight=getHeight(root->left);
        int rightheight=getHeight(root->right);
        
        if(abs(leftheight-rightheight)<=1
          && isBalanced(root->left)&& isBalanced(root->right)){
            return true;
        }
        return false;
    }
};