// Problem - https://leetcode.com/problems/last-stone-weight/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto u : stones){
            pq.push(u);
        }
        
        while(pq.size() > 1){
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();

            if(x != y){
                pq.push(abs(x - y));
            }
        }

        if(pq.size() == 1){
            return  pq.top();
        }

        return 0;
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(n)