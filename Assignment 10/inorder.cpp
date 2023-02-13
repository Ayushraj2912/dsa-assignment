class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        stack<TreeNode *> S;
        if (root)
            S.push(root);
        while (!S.empty())
        {
            TreeNode *temp = S.top();
            if (temp->left)
            {
                S.push(temp->left);
                temp->left = NULL;
            }
            else
            {
                result.push_back(temp->val);
                S.pop();
                if (temp->right)
                {
                    S.push(temp->right);
                }
            }
        }
        return result;
    }
};