class Solution
{
public:
    int sum = INT_MIN;
    int maxSum(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int leftSum = max(0, maxSum(root->left));
        int rightSum = max(0, maxSum(root->right));
        sum = max(sum, leftSum + rightSum + root->val);
        return root->val + max(leftSum, rightSum);
    }
    int maxPathSum(TreeNode *root)
    {
        maxSum(root);
        return sum;
    }
};