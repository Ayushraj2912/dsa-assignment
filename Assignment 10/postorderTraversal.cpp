class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
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
            if (temp->left)
                S.push(temp->left);
            if (temp->right)
                S.push(temp->right);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
