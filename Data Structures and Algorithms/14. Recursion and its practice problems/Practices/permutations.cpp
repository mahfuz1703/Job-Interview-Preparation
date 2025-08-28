// Problem - https://leetcode.com/problems/permutations/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int> &cur, vector<bool> &mask, vector<int> &nums, vector<vector<int>> &ans){
        if(cur.size() == nums.size()){
            ans.push_back(cur);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(mask[i] == 0){
                cur.push_back(nums[i]);
                mask[i] = 1;
                solve(cur, mask, nums, ans);

                cur.pop_back();
                mask[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> cur;
        vector<bool> mask(nums.size(), 0);
        vector<vector<int>> ans;

        solve(cur, mask, nums, ans);

        return ans;
    }
};

// Time Complexity - O(n! * n)
// Space Complexity - O(n)