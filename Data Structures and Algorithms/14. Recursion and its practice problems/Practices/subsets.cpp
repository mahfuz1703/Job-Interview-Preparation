// Problem - https://leetcode.com/problems/subsets/description/
#include <vector>
using namespace std;

class Solution {
public:
    void solve(int start, vector<int> &cur, vector<int> &nums, vector<vector<int>> &ans){
        ans.push_back(cur);
        if(cur.size() == nums.size()){
            return;
        }

        for(int i = start; i < nums.size(); i++){
            cur.push_back(nums[i]);
            solve(i+1, cur, nums, ans);
            cur.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> cur;
        vector<vector<int>> ans;

        solve(0, cur, nums, ans);

        return ans;
    }
};

// Time Complexity - O(2^n * n)
// Space Complexity - O(n)