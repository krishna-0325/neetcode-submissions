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
int s(TreeNode* root, int maxii)
{
    if(!root) return 0;

    int count=0;
    if(root->val >= maxii)
    {
        count=1;

    }
    maxii= max(maxii,root->val);

    count+= s(root->left,maxii);
    count+= s(root->right,maxii);

    return count;
}
    int goodNodes(TreeNode* root) {
        return s(root,root->val);
    }
};
