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
int maxpath(TreeNode* root, int & maxii)

{
    if(!root) return 0;

    int lh= max(0,maxpath(root->left,maxii));
    int rh= max(0,maxpath(root->right,maxii));

    maxii= max(maxii,lh+rh+root->val);

    return max(lh,rh)+root->val;
}
    int maxPathSum(TreeNode* root) {
       int maxii= INT_MIN;
       maxpath(root,maxii);
       return maxii;
    }
};
