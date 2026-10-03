class Solution {
public:

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,
                    int preStart, int preEnd,
                    int inStart, int inEnd) {

        
        if(preStart > preEnd || inStart > inEnd)
            return nullptr;

        int rootValue = preorder[preStart];

        TreeNode* root = new TreeNode(rootValue);

        int inRoot = inStart;

        while(inorder[inRoot] != rootValue) {
            inRoot++;
        }

        int leftSize = inRoot - inStart;

      
        root->left = solve(preorder, inorder,
                           preStart + 1,
                           preStart + leftSize,
                           inStart,
                           inRoot - 1);

     
        root->right = solve(preorder, inorder,
                            preStart + leftSize + 1,
                            preEnd,
                            inRoot + 1,
                            inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        return solve(preorder, inorder,
                     0, preorder.size() - 1,
                     0, inorder.size() - 1);
    }
};