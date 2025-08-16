#include <bits/stdc++.h>
using namespace std;

vector<int> dp(100, -1);

int fib(int n) {
    if (n <= 1) return n;

    if(dp[n] != -1) return dp[n];

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    cout << "Fibonacci of 5: " << fib(5) << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n) for memoization array and recursion stack