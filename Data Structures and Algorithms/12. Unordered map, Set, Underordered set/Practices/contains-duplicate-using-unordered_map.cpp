// Problem - https://leetcode.com/problems/contains-duplicate/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> visit;
        for(auto u : nums){
            if(visit[u]) return true;
            visit[u]  = true;
        }

        return false;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)