// Problem - https://leetcode.com/problems/contains-duplicate/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto u : nums) s.insert(u);
        if(nums.size() != s.size()) return true;
        else return false;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)