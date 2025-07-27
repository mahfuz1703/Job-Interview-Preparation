// Problem - https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(auto u : s){
            if(u == '(' || u == '{' || u == '[') st.push(u);
            else{
                if(st.empty() || (u == ')' && st.top() != '(') || (u == '}' && st.top() != '{') || (u == ']' && st.top() != '[')) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

// Time Complexity: O(n) where n is the length of the string s
// Space Complexity: O(n) for the stack used to store opening parentheses
// where n is the length of the string s