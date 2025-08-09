// Problem - https://leetcode.com/problems/third-maximum-number/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto u : nums){
            pq.push(u);
        }

        int firstMax = pq.top();

        while(pq.size() > 0  and pq.top() == firstMax){
            pq.pop();
        }

        int secondMax = pq.top();
        while(pq.size() > 0  and pq.top() == secondMax){
            pq.pop();
        }

        if(pq.size() > 0){
            return pq.top();
        }

        return firstMax;
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(n)
// where n is the number of elements in the input array nums.