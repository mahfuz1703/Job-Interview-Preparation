// Problem - https://leetcode.com/problems/find-all-duplicates-in-an-array/
// Time Complexity - O(n)
// Space Complexity - O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, bool> mp;
        vector<int> ans;

        for(auto u : nums){
            if(mp[u]){
                ans.push_back(u);
            }else{
                mp[u] = true;
            }
        }

        return ans;
    }
};