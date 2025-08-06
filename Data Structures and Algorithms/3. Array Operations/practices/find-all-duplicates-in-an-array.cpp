// Problem - https://leetcode.com/problems/find-all-duplicates-in-an-array/
// Time Complexity - O(n)
// Space Complexity - O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            int idx = abs(nums[i]) - 1;
            if(nums[idx] < 0){
                ans.push_back(abs(nums[i]));
            }else{
                nums[idx] = -nums[idx];
            }
        }

        return ans;
    }
};