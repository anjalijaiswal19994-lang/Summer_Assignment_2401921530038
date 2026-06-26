class Codec
{
public:
    void serializeHelper(TreeNode *root, string &s)
    {
        if (root == NULL)
        {
            s += "N,";
            return;
        }

        s += to_string(root->val) + ",";
        serializeHelper(root->left, s);
        serializeHelper(root->right, s);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        string s;
        serializeHelper(root, s);
        return s;
    }
    TreeNode *deserializeHelper(stringstream &ss)
    {
        string val;
        getline(ss, val, ',');

        if (val == "N")
            return NULL;

        TreeNode *root = new TreeNode(stoi(val));

        root->left = deserializeHelper(ss);
        root->right = deserializeHelper(ss);

        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        stringstream ss(data);
        return deserializeHelper(ss);
    }
};