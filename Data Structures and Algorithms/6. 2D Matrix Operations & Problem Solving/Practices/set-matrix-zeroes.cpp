#include <bits/stdc++.h>
using namespace std;

// Problem - https://leetcode.com/problems/set-matrix-zeroes/description/

int main(){
    int n, m; cin >> n >> m;

    int a[n][m];

    // Input matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    vector<int> row, col;

    // Find the rows and columns that need to be set to zero
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 0){
                row.push_back(i);
                col.push_back(j);
            }
        }
    }

    // Set the rows to zero
    for(auto i : row){
        for(int j = 0; j < m; j++){
            a[i][j] = 0;
        }
    }

    // Set the columns to zero
    for(auto j : col){
        for(int i = 0; i < n; i++){
            a[i][j] = 0;
        }
    }

    // Output the modified matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Time Complexity: O(n * m)
// Space Complexity: O(n + m) for storing the rows and columns