// problem - https://leetcode.com/problems/rotate-image/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(i < j){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }

        for(int i = 0; i < n; i++){
            int start = 0, end = n - 1;
            while(start < end){
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1) (excluding input storage)