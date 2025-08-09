// Problem - https://leetcode.com/problems/top-k-frequent-elements/
#include <vector>
#include <map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> fre;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        vector<int> ans;
        for(auto u : nums){
            fre[u]++;
        }

        for(auto [ky, v]: fre){
            minHeap.push({v, ky});

            if(minHeap.size() > k){
                minHeap.pop();
            }
        }

        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};

// Time Complexity: O(n log k)
// Space Complexity: O(n)
// where n is the number of elements in the input array nums.