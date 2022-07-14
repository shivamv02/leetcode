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
    vector<string> v;
    void pre(TreeNode* root,string prev)
    {
        if(root->left==NULL and root->right==NULL)
        {
            prev+=to_string(root->val);
            v.push_back(prev);
        }
        prev+=to_string(root->val);
        if(root->left)
            pre(root->left,prev);
        if(root->right)
            pre(root->right,prev);
            
    }
    int sumRootToLeaf(TreeNode* root) {
        pre(root,"");
        int sum=0;
        for(auto x:v)
        {
            int t=0;
            for(int i=x.size()-1;i>=0;i--)
                if(x[i]=='1')
                    t+=pow(2,x.size()-i-1);
             sum+=t;       
        }
        return sum;
    }
};