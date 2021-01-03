//Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.
//For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. 
//Notice that multiple kids can have the greatest number of candies.
//Example 1:
//Input: candies = [2,3,5,1,3], extraCandies = 3
//Output: [true,true,true,false,true] 

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        
        int max_can = 0;
        vector<bool> ans;
        for(auto a : candies)
        {
            max_can = max(max_can , a);
        }
       for(auto a : candies)
       {
           if(a+extraCandies >= max_can)
           {
               ans.push_back(true);
           }
           else
           {
               ans.push_back(false);
           }
       }
        
        return ans;
        
    }
    
};
