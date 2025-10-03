// Problem - https://leetcode.com/problems/merge-sorted-array/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;
        vector<int> ans(n + m, 0);

        while(i < m and j < n){
            if(nums1[i] < nums2[j]){
                ans[k++] = nums1[i++];
            }else{
                ans[k++] = nums2[j++];
            }
        }

        while(i < m){
            ans[k++] = nums1[i++];
        }
        while(j < n){
            ans[k++] = nums2[j++];
        }

        nums1 = ans;
    }
};

// Time Complexity - O(m + n)
// Space Complexity - O(m + n)