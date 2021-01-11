//https://practice.geeksforgeeks.org/problems/sum-tree/1

//Should return true if tree is Sum Tree, else false
//left subtree and right subtree values should sum upto rootnode

int sum(Node *root)
{
    if(root==NULL) 
        return 0;
    return (root->data + sum(root->left) + sum(root->right));
}
bool isSumTree(Node* root)
{  
    //sum(root->left) returns sumvalue of left subtree
    //sum(root->right) returns sumvalue of right subtree
    
     if(sum(root->left)+sum(root->right) == root->data)
        return 1;
     else
        return 0;
}
