/*
Given a list of sorted characters letters containing only lowercase letters, and given a target letter target,
find the smallest element in the list that is larger than the given target.
Letters also wrap around. For example, if the target is target = 'z' and letters = ['a', 'b'], the answer is 'a'.
Examples:
Input:
letters = ["c", "f", "j"]
target = "a"
Output: "c"
*/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int r =letters.size()-1;
        char letter ;
        if(target>=letters[r]) return letters[l];
         if(target<letters[l]) return letters[l];
         while (l <= r) { 
        int m = l + (r - l) / 2; 
       if (letters[m] == target){
           //for [k,e,e,e,v] with target e this while loop is used
           while(letters[m] == letters[m+1])
           {
               m++;
           }
           letter = letters[m+1];
           return letter;
       }
            
        // If x greater, ignore left half 
        if (letters[m] < target) {
            l = m + 1; 
          
            letter = letters[m+1]; 
        }
  
        // If x is smaller, ignore right half 
        else{
             r = m - 1; 
            letter = letters[m]; 
           
            
        }
    }
    return letter;
    }
};
