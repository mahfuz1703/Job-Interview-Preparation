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

    // rotate the matrix 180 degrees clockwise
    int k = 2; // Number of 90-degree rotations
    while(k--){
        // Transpose the matrix
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < m; j++){
                if(i < j){
                    swap(arr[i][j], arr[j][i]);
                }
            }
        }

        // Reverse each row
        for(int i = 0; i < n; i++){
            int start = 0, end = m - 1;
            while(start < end){
                swap(arr[i][start], arr[i][end]);
                start++;
                end--;
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

// This code rotates a 2D matrix 180 degrees clockwise by performing two 90-degree rotations.
// Time Complexity: O(n * m)
// Space Complexity: O(1) (excluding input storage)