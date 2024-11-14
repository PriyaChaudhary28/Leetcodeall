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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int maxwid=0;
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,1});
        
        while(!q.empty()){
            int levelsize=q.size();
            unsigned long long firstindex=q.front().second;
            unsigned long long lastindex=firstindex;
            
            for(int i=0;i<levelsize;i++){
                auto [node,index]=q.front();
                q.pop();
                lastindex=index;
                
                if (node->left) {
                    q.push({node->left, 2 * index});
                }
                if (node->right) {
                    q.push({node->right, 2 * index + 1});
                }
                
            }
            maxwid=max(maxwid,int(lastindex-firstindex+1));
        }
        return maxwid;
    }
};