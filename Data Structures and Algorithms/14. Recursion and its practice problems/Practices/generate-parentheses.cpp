// Problem - https://leetcode.com/problems/generate-parentheses/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int n, string &cur, int opening, int closing, vector<string> &ans){
        if(cur.size() == 2*n){
            ans.push_back(cur);
            return;
        }

        if(opening < n){
            cur.push_back('(');
            solve(n, cur, opening + 1, closing, ans);
            cur.pop_back();
        }

        if(closing < opening){
            cur.push_back(')');
            solve(n, cur, opening, closing + 1, ans);
            cur.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string cur;
        solve(n, cur, 0, 0, ans);
        return ans;
    }
};

// Time Complexity - O(4^n / sqrt(n)), Katalan Number
// Space Complexity - O(n)