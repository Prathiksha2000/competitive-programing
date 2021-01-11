https://practice.geeksforgeeks.org/problems/postorder-traversal/1

void post(Node *root, vector <int> &ans)
{
    if (root == nullptr)
        return;
    post(root->left, ans);
    post(root->right, ans);
    ans.push_back (root->data);
}
vector <int> postOrder(Node* root)
{
    vector <int> ans;
    post(root, ans);
    return ans;
}
