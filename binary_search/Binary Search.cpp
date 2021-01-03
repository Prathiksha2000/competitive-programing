//Given a sorted (in ascending order) integer array nums of n elements and a target value, write a function to search target in nums. 
//If target exists, then return its index, otherwise return -1.
//Example 1:
//Input: nums = [-1,0,3,5,9,12], target = 9
//Output: 4
//Explanation: 9 exists in nums and its index is 4


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r =nums.size()-1;
         while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (nums[m] == target) 
            return m; 
  
        // If x greater, ignore left half 
        if (nums[m] < target) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
 
    return -1; 
    }
};
