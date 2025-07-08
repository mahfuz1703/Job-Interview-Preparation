#include <bits/stdc++.h>
using namespace std;

// Problem - https://leetcode.com/problems/toeplitz-matrix/description/

int main(){
    int n, m; cin >> n >> m;

    int a[n][m];

    // Input matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    bool isToeplitz = true;
    // for(int i = 0; i < n-1; i++){
    //     int row = i, col = 0;
    //     while(row + 1 < n && col + 1 < m){
    //         if(a[row][col] != a[row+1][col+1]){
    //             isToeplitz = false;
    //             break;
    //         }
    //         row++;
    //         col++;
    //     }
    // }

    // for(int i = 1; i < m-1; i++){
    //     int row = 0, col = i;
    //     while(row + 1 < n && col + 1 < m){
    //         if(a[row][col] != a[row+1][col+1]){
    //             isToeplitz = false;
    //             break;
    //         }
    //         row++;
    //         col++;
    //     }
    // }

    // another approach
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < m-1; j++){
            if(a[i][j] != a[i+1][j+1]){
                isToeplitz = false;
                break;
            }
        }
    }

    if(isToeplitz){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    
}

// Time Complexity: O(n * m)
// Space Complexity: O(1) - excluding input storage