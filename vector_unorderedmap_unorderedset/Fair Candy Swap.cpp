//Alice and Bob have candy bars of different sizes: A[i] is the size of the i-th bar of candy that Alice has, and B[j] is the size of the j-th bar of candy that Bob has.
//Since they are friends, they would like to exchange one candy bar each so that after the exchange, they both have the same total amount of candy.  
//(The total amount of candy a person has is the sum of the sizes of candy bars they have.)
//Return an integer array ans where ans[0] is the size of the candy bar that Alice must exchange, and ans[1] is the size of the candy bar that Bob must exchange.
//If there are multiple answers, you may return any one of them.  It is guaranteed an answer exists.
//Example 1:
//Input: A = [1,1], B = [2,2]
//Output: [1,2]

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
    //sa - x + y =sb + x - y
    // y =x +  (sb -sa) / 2
     int sa = 0;
     int sb = 0;
     vector<int> ans;
     for (auto  i : A){
         sa += i;
     }
    for (auto  i : B){
         sb += i;
     }
    int delta = (sb -sa) / 2;
     // If Alice gives x, she expects to receive x + delta
    unordered_set<int> bset;
    bset.insert(B.begin() , B.end());
     for(auto i : A){
         if (bset.find(i+delta) != bset.end()){
             ans.push_back(i);
             ans.push_back(i+delta);
             break;
         }
     }
        return ans;
    }
};
