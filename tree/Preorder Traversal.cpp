https://practice.geeksforgeeks.org/problems/preorder-traversal/1

void pre(Node *root, vector <int> &ans)
{
    if (root == nullptr)
        return;
    ans.push_back (root->data);
    pre(root->left, ans);
    pre(root->right, ans);
}
vector <int> preorder(Node* root)
{
    vector <int> ans;
    pre(root, ans);
    return ans;
  
}
