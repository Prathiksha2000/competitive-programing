//https://practice.geeksforgeeks.org/problems/children-sum-parent/1

// Return 1 if all the nodes in the tree satisfy the given property. Else return 0
int isSumProperty(Node *root)
{
 // Add your code here
    if(root == NULL )
        return 1;
    if(root ->left ==NULL && root -> right == NULL)
        return 1;
    int sum =0;
    if(root -> left != NULL)
        sum = sum +root -> left-> data;
    if(root -> right != NULL)
        sum = sum +root ->right -> data;
    if(sum == root -> data && isSumProperty(root -> left) && isSumProperty(root -> right))
        return 1;
}
