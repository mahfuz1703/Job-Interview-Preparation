// Problem - https://www.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1

class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        string ans = "";
        stack<char> st;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                st.push(s[i]);
            }else{
                if(!st.empty()){
                        while(!st.empty()){
                        ans += st.top();
                        st.pop();
                    }
                    ans += " ";
                }
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        if(ans[ans.size()-1] == ' '){
            auto last_space_pos = ans.find_last_of(' ');
            if (last_space_pos != string::npos) {
                ans.erase(last_space_pos, 1);
            }
        }
        return ans;
    }
};

// Time Complexity: O(n) where n is the length of the string
// Space Complexity: O(n) for the stack used to reverse each word