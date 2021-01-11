//https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1/

// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree
int sumTree(Node* node){
   if(node == NULL)  
       return 0;  
  
    // Store the old value  
    int old_val = node->data;  
  
    // Recursively call for left and 
    // right subtrees and store the sum as  
    // new value of this node  
    node ->data = sumTree(node->left) + sumTree(node->right);  
  
    // Return the sum of values of nodes 
    // in left and right subtrees and  
    // old_value of this node  
    return node->data + old_val;
}
void toSumTree(Node *node)
{
   sumTree(node); 
}
