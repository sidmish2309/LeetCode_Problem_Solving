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

 
void dfs(TreeNode* root, vector<int> &v1)
{
   
    if(root->left) dfs(root->left,v1);
    if(root->right) dfs(root->right,v1);
    if(root->left==NULL && root->right==NULL) v1.push_back(root->val);
}
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       
       vector<int> v1,v2;
        dfs(root1,v1);
        dfs(root2,v2);
        if(v1==v2) return true;
        return false;
    }
};