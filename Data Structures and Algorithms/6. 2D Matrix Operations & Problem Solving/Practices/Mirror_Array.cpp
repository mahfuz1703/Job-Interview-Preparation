#include <bits/stdc++.h>
using namespace std;

// Problem - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

int main(){
    int n, m; cin >> n >> m;

    int a[n][m];

    // Input matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    
    // Mirror the array
    for(int i = 0; i < n; i++){
        int l = 0, r = m - 1;
        while(l < r){
            swap(a[i][l], a[i][r]);
            l++;
            r--;
        }
    }

    // Output the mirrored array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Time Complexity: O(n * m)
// Space Complexity: O(1) // excluding input storage