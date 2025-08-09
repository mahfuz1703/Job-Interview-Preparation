// Problem - https://leetcode.com/problems/kth-largest-element-in-an-array/
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;

        for(auto u : nums){
            pq.push(u);
        }

        while(!pq.empty() and k > 1){
            pq.pop();
            k--;
        }

        return pq.top();
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(n)
// where n is the number of elements in the input array nums.


// Optimized solution using a min-heap-----------------------
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(auto u : nums){
            minHeap.push(u);

            if(minHeap.size() > k){
                minHeap.pop();
            }
        }

        return minHeap.top();
    }
};

// Time Complexity: O(n log k)
// Space Complexity: O(k)
// where n is the number of elements in the input array nums and k is the kth largest element to find.