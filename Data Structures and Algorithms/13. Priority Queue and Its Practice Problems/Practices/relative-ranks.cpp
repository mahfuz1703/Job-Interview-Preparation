// Problem - https://leetcode.com/problems/relative-ranks/
#include <vector>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int sz = score.size();
        vector<string> ans(sz);
        priority_queue<pair<int, int>> pq;

        for(int i = 0; i < sz; i++){
            pq.push({score[i], i});
        }

        if(!pq.empty()){
            ans[pq.top().second] = "Gold Medal";
            pq.pop();
        }
        if(!pq.empty()){
            ans[pq.top().second] = "Silver Medal";
            pq.pop();
        }

        if(!pq.empty()){
            ans[pq.top().second] = "Bronze Medal";
            pq.pop();
        }

        int rnk = 4;
        while(!pq.empty()){
            int indx = pq.top().second;
            int val = pq.top().first;

            ans[pq.top().second] = to_string(rnk);
            rnk++;
            pq.pop();
        }

        return ans;
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(n)
// where n is the number of elements in the input array score.