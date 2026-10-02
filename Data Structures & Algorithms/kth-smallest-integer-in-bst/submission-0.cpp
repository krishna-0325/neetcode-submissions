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
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int>pq;
        queue<TreeNode*>q;
        if(!root) return 0;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* node= q.front();
                q.pop();
                if(node->left!=nullptr) q.push(node->left);
                if(node->right!=nullptr) q.push(node->right);
               
               pq.push(node->val);
            }
        }
        while(pq.size()>k)
        {
            pq.pop();
        }
       return pq.top();
    }
};
