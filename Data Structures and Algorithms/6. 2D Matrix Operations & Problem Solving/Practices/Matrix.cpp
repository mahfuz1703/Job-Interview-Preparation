#include <bits/stdc++.h>
using namespace std;

// Problem - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

int main(){
    int n; cin >> n;

    int a[n][n];

    // Input matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    for(int i = 0; i < n; i++){
        primaryDiagonalSum += a[i][i]; // Primary diagonal
        secondaryDiagonalSum += a[i][n - 1 - i]; // Secondary diagonal
    }

    cout << abs(primaryDiagonalSum - secondaryDiagonalSum) << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1) // excluding input storage