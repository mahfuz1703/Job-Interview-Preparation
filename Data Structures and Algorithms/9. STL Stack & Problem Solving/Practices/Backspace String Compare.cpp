// Problem - https://leetcode.com/problems/backspace-string-compare/description/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;
        for(auto u : s){
            if(u != '#') st1.push(u);
            else {
                if(!st1.empty()) st1.pop();
            }
        }

        for(auto u : t){
            if(u != '#') st2.push(u);
            else {
                if(!st2.empty()) st2.pop();
            }
        }

        return st1 == st2;
    }
};

// Time Complexity: O(n + m) where n is the length of string s and m is the length of string t
// Space Complexity: O(n + m) for the stacks used to store characters of s and t
// where n is the length of string s and m is the length of string t