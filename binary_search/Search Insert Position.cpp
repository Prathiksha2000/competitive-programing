//Given a sorted array of distinct integers and a target value, return the index if the target is found.
//If not, return the index where it would be if it were inserted in order.
//Example 1:
//Input: nums = [1,3,5,6], target = 5
//Output: 2

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int low = 0, high = nums.size()-1, mid,pos;
        while(low <= high) {
            mid = low + (high-low)/2;
            
            if(nums[mid] == target) {
                return mid;
            } 
            else if(nums[mid] > target) {
                high = mid - 1;
                pos = mid;
            } else {
                low = mid + 1;
                pos = mid + 1;
            }
        }
        
        return pos;  
    }
};
