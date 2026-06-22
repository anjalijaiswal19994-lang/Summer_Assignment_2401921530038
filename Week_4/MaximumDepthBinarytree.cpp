class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int rh = maxDepth(root->left);
        int lh = maxDepth(root->right);
        return 1 + max(lh, rh);
    }
};