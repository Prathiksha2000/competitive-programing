//https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1/?category[]=Tree&category[]=Tree&page=1&query=category[]Treepage1category[]Tree

class Solution{
    public:
    int height(struct Node* node){
     if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the depth of each subtree */
        //do preorder traversal and reach leaf node and backtrack 
        int lDepth = height(node->left);  
        int rDepth = height(node->right);  
      
        /* use the larger one */
        if (lDepth > rDepth)  
            return(lDepth + 1);  
        else return(rDepth + 1);  
    }  
    }
};
