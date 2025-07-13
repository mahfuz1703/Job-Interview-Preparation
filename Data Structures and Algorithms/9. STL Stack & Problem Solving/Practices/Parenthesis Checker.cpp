// Problem - https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1
class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' or s[i]  == '{'  or s[i] == '['){
                st.push(s[i]);
            }else{
                if(!st.empty() and ( (st.top() == '(' and s[i] == ')') or (st.top() == '{' and s[i] == '}') or
                (st.top() == '[' and s[i] == ']'))){
                    st.pop();
                }else return false;
            }
        }
        return st.empty();
    }
};

// Time Complexity: O(n) where n is the length of the string
// Space Complexity: O(n) for the stack used to store the opening brackets