// Problem - https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        for(auto u : s){
            if(!st.empty()){
                if(st.top() == u) st.pop();
                else st.push(u);
            }else st.push(u);
        }
        string str;
        while(!st.empty()){
            str += st.top(); st.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};

// Time Complexity: O(n) where n is the length of the string s
// Space Complexity: O(n) for the stack used to store characters
// where n is the length of the string s