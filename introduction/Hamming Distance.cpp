//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
//Given two integers x and y, calculate the Hamming distance.
//Note: 0 ≤ x, y < 231.
//Example:
//Input: x = 1, y = 4
//Output: 2

class Solution {
public:
    int hammingDistance(int x, int y) {
        //cout<<bitset<32>(x^y).to_string();
        return bitset<32>(x^y).count();
    }
    int main()
    {
    int x,y ;
    cin>>x;
    cin>>y;
    cout << hammingDistance(x,y) ;    
    return 0;
   }
};
