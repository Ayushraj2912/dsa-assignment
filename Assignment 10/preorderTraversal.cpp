class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> result;
        stack<TreeNode *> S;
        if (root)
            S.push(root);
        while (!S.empty())
        {
            TreeNode *temp = S.top();
            S.pop();
            result.push_back(temp->val);
            if (temp->right)
            {
                S.push(temp->right);
            }
            if (temp->left)
            {
                S.push(temp->left);
                temp->left == NULL;
            }
        }
        return result;
    }
};
