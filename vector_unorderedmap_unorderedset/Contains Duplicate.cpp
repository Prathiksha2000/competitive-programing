//Given an array of integers, find if the array contains any duplicates.
//Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
//Example 1:
//Input: [1,2,3,1]
//Output: true

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> data;
    for(auto num : nums){
        //pointer points to end if it is not in the set
        if(data.find(num) == data.end()){
            data.insert(num);
        }
        else{
            return true;
        }
    }
    return false;
    }
};
