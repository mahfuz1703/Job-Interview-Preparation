// Problem - https://www.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

class Solution {
  public:
    string reverse(const string& S) {
        // code here
        string ans = "";
        stack<char> st;
        for(auto u : S){
            st.push(u);
        }
        
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
};

// Time Complexity: O(n) where n is the length of the string S
// Space Complexity: O(n) for the stack used to store characters of the string S
// where n is the length of the string S