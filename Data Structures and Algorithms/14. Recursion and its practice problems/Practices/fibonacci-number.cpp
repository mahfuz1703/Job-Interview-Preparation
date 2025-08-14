// Problem - https://leetcode.com/problems/fibonacci-number/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;

        return fib(n-1) + fib(n-2);
    }
};

// Time Complexity: O(2^n)
// Space Complexity: O(n) due to recursion stack


// Optimized Approach using Memoization
class Solution {
public:
    vector<int> mem;
    Solution() : mem(100, -1) {}
    int fib(int n) {
        if(n <= 1) return n;

        if(mem[n] != -1) return mem[n];
        return mem[n] = fib(n-1) + fib(n-2);
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n) for memoization array and recursion stack