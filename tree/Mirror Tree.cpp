https://practice.geeksforgeeks.org/problems/mirror-tree/1/

/* Should convert tree to its mirror */
void mirror(Node* node) 
{
    if (node == NULL)  
        return;  
    else
    { 
        struct Node* temp; 
        //do preorder traversel (root , left , right)  and reach the leaf nodes and backtrack
        /* do the subtrees */
        mirror(node->left); 
        mirror(node->right); 
        
        /* swap the pointers in this node */
        temp     = node->left; 
        node->left = node->right; 
        node->right = temp; 
    } 
}
