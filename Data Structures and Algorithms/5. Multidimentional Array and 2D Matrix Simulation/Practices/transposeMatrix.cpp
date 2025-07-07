#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    // int transpose[n][m]; // Transpose of the matrix
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         transpose[j][i] = arr[i][j]; // Swap rows and columns
    //     }
    // }

    // build transpose matrix
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < m; j++){
            if(i < j){
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// This code transposes a 2D matrix.
// Time Complexity: O(n * m)
// Space Complexity: O(1) (excluding input storage)