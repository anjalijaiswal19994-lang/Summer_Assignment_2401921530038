class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        bool leftToright = true;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            vector<int> level(n);
            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                int index = leftToright ? i : n - 1 - i;
                level[index] = node->val;
                if (node->left != NULL)
                    q.push(node->left);
                if (node->right != NULL)
                    q.push(node->right);
            }
            leftToright = !leftToright;
            ans.push_back(level);
        }
        return ans;
    }
};