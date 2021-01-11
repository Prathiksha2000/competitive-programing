//https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

// function should print the topView of the binary tree
void topView(struct Node *root)
{
    //Your code here
    if (root == NULL) {
      return;
  }
 
  Node *temp = NULL;
  //queue helps to do bfs(level order traversal)
  queue<pair<Node* , int>> q;
  //map points topnodes with d(horizontal distance) as a key and that node's data as value for topnodes in each line_no(horizontal distance)
  //keys(horizontal distance) in map are sorted
  map<int,int> mp;
  //initialize root node's hd as 0
  q.push(make_pair( root, 0 ));
 
  while (!q.empty())
  {
      temp = q.front().first;
      //d holds horizontal distance(eg : -1,0,+1)
      int d = q.front().second;
      q.pop();
      /*    If its the top or first node for that hd (line no) add it to a map else leave. 
      this can be achieved , since hd is added as a key if ine node is added with
      that hd as a key another node with same hd in the level below cannot be added.     */
      //mp.find() points to end when it is not available
      if (mp.find(d) == mp.end()) {
          mp[d] = temp ->data;
          //cout << temp -> data <<" ";
      }
      //for left child , hd is parent's hd - 1
      // d here is nothing but hd
      if (temp->left) {
          //make_pair is used to add values in queue as a pair
          q.push(make_pair(temp->left, d - 1 ));
      }
      //for right child , hd is parent's hd + 1
      if (temp->right) {
          q.push(make_pair(temp->right, d + 1 ));
      }
  }
  /*unordered map cannot
  be used since the output needs to be sorted*/
  //map contains keys in ordered fashion [-2,-1,0,1...]
  //map contains top node's data as a value for each hd (line no)
  for(auto i=mp.begin();i!=mp.end();i++)
    {
        //second points to value in the map
        cout<<i->second<<" ";
    }   
}


