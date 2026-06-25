class Solution
{
public:
    int diameter = 0;
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int lh = height(root->left);
        int lr = height(root->right);
        diameter = max(diameter, lh + lr);
        return 1 + max(lh, lr);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        height(root);
        return diameter;
    }
};