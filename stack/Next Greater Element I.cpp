/*
You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements are subset of nums2. 
Find all the next greater numbers for nums1's elements in the corresponding places of nums2.
The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, output -1 for this number.
Example 1:
Input: nums1 = [4,1,2], nums2 = [1,3,4,2].
Output: [-1,3,-1]
Explanation:
    For number 4 in the first array, you cannot find the next greater number for it in the second array, so output -1.
    For number 1 in the first array, the next greater number for it in the second array is 3.
    For number 2 in the first array, there is no next greater number for it in the second array, so output -1.
*/

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> ans_map;
        stack<int> valStack;
        for (auto val : nums2)
        {
            if (valStack.empty() || valStack.top() >= val)
            {
                valStack.push(val);
            }
            else
            {
                while (!valStack.empty() && valStack.top() < val)
                {
                    //the value inside bracket is the key and the value assigned to it is the value in map
                    ans_map[valStack.top()] = val;
                    valStack.pop();
                }
                valStack.push(val);
            }
        }
        vector<int> ans_vector;
        for (auto val : nums1)
        {
            //since it is a pointe to avoid confution auto type is used
            //or u can compare ans_map.find(val)!= ans_map.end() directly
            auto pair = ans_map.find(val);
            if (pair != ans_map.end())
            {
                ans_vector.push_back(pair->second);
            }
            else
            {
                ans_vector.push_back(-1);
            }
        }
        return ans_vector;
    }
};
