//https://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1

vector<vector<int>> levelOrder(Node* root)
{
    vector<vector<int>>ans;
    queue<Node*>q;
    //using bfs
    q.push(root);
    
    while(q.size()!=0)
    {
        int s = q.size();
        
        vector<int>v;
        
        while(s--)
        {   
            Node* node;
            node = q.front();
            q.pop();
            v.push_back(node->data);
    
            if(node->left!=NULL)
                q.push(node->left);
            if(node->right!=NULL)
                q.push(node->right);
            
        }
        ans.push_back(v);
        
        //optional
        //v.clear();
    }
    return ans;
}


