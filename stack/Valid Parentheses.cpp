/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Example 1:
Input: s = "()[]{}"
Output: true
Example 2:
Input: s = "(]"
Output: false
*/

class Solution {
public:
    bool isValid(string s) {
    stack<char> st; 
    char x; 
  
    // Traversing the Expression 
    for (int i = 0; i < s.length(); i++)  
    { 
        if (s[i] == '(' || s[i] == '['
            || s[i] == '{')  
        { 
            // Push the element in the stack 
            st.push(s[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (st.empty()) 
            return false; 
  
        switch (s[i]) { 
        case ')': 
              
            // Store the top element in a 
            x = st.top(); 
            st.pop(); 
            //false condition is checked because if even one condition is false output is false 
            //but if one condition is true output need not be true
            if (x == '{' || x == '[') 
                return false; 
            break; 
  
        case '}': 
  
            // Store the top element in b 
            x = st.top(); 
            st.pop(); 
            if (x == '(' || x == '[') 
                return false; 
            break; 
  
        case ']': 
  
            // Store the top element in c 
            x = st.top(); 
            st.pop(); 
            if (x == '(' || x == '{') 
                return false; 
            break; 
        } 
    } 
  
    // Check Empty Stack 
    return (st.empty()); 
    }
};
