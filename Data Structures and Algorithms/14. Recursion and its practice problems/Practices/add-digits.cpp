// Problem - https://leetcode.com/problems/add-digits/description/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int n){
        if(n <= 9) return n;

        int digitSum = 0;
        while(n > 0){
            digitSum += n % 10;
            n /= 10;
        }

        return solve(digitSum);
    }
    int addDigits(int num) {
        return solve(num);
    }
};

// Time Complexity - O(log n), also we can tell that it is O(1) because the number of digits in n is total  < 10 (highest digit <= 10)
// Space Complexity - O(1)