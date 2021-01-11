//https://practice.geeksforgeeks.org/problems/inorder-traversal/1

void in(Node *root, vector <int> &ans)
{
    if (root == nullptr)
        return;
    in(root->left, ans);
    ans.push_back (root->data);
    in(root->right, ans);
}
vector <int> inOrder(struct Node *root) {

    vector <int> ans;
    in(root, ans);
    return ans;
}
