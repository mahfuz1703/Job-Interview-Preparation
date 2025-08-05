// Problem - https://leetcode.com/problems/subarray-sum-equals-k/
// Time Complexity - O(n)
// Space Complexity - O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_sum;
        prefix_sum[0] = 1;
        int current_sum = 0, cnt = 0;

        for(auto u : nums){
            current_sum += u;


            cnt += prefix_sum[current_sum - k];

            prefix_sum[current_sum]++;

        }

        return cnt;
    }
};