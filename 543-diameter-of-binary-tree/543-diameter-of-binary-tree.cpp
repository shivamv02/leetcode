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
private:
    int height(TreeNode* node,int &h)
    {
        if(!node)
            return 0;
        int lh=height(node->left,h);
        int rh=height(node->right,h);
        h=max(lh+rh,h);
        return 1+max(lh,rh);
        
    }
    public:
    int diameterOfBinaryTree(TreeNode* root) {
       int dia=0;
        height(root,dia);
        return dia;
    }
};