//Given an integer number n, return the difference between the product of its digits and the sum of its digits.
//Example 1:
//Input: n = 234
//Output: 15 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
    int sum = 0;
    int product = 1; 
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n = floor(n / 10);
    }

    return product - sum;
    }
    int main()
    {
    int n ;
    cin>>n;    
    cout << subtractProductAndSum(n);    
    return 0;
   }
};
