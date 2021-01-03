//You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have.
//Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.
//Letters are case sensitive, so "a" is considered a different type of stone from "A".
//Example 1:
//Input: jewels = "aA", stones = "aAAbbbb"
//Output: 3

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int jc = J.length();
	    int sc = S.length();
	    
	    string jarr[jc];
	    string sarr[sc];
       
         for (int i = 0;i<jc; i++){
             jarr[i] = J.at(i);
         }
        
         for (int i = 0;i<sc ; i++){
             sarr[i] = S.at(i);
         }

	    int jewelCount = 0;
	    for(int a=0;a<jc;a++)
	    {
	        for (int b=0;b<sc;b++)
	        {
	            if(jarr[a] == sarr[b])
	            {
	                jewelCount++;
	            }
	        }
	    }
        return jewelCount;
 	    
        
    }
    void main()
    {
        string j,s;
	    cin>>j;
	    cin>>s;
        cout<<numJewelsInStones(j,s);
    }
};
