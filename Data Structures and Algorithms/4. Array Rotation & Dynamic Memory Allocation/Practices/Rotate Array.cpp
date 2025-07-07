// problem - https://leetcode.com/problems/rotate-array/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& arr, int start, int end){
        while(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums, 0, n - k - 1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1) (excluding input storage)
