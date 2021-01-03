//Given an array nums of integers, return how many of them contain an even number of digits.
//Example 1:
//Input: nums = [12,345,2,6,7896]
//Output: 2

class Solution {
public:
    int findNumbers(vector<int>& nums) {
    int evencount =0;
    int n =0;
    for(auto n : nums)
    {
    int count = 0;
    while (n > 0) {
       // int digit = n % 10;
        count++;
        n = floor(n / 10);
    }
    if ((count % 2 ) == 0)
    {
        evencount++;
    }
    }    
     return evencount;
    }
};
