#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, p; cin >> n >> m >> p;

    int a[n][m], b[m][p], mul[n][p];

    // Input first matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    // Input second matrix
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cin >> b[i][j];
        }
    }

    // Calculate multiplication of matrices
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            int sum = 0;
            for(int k = 0; k < m; k++){
                sum += a[i][k] * b[k][j];
            }
            mul[i][j] = sum;
        }
    }

    // Output the multiplication matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}

// Time Complexity: O(n * m * p)
// Space Complexity: O(n * p)