#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;

    int a[n][m], b[n][m], sum[n][m];

    // Input first matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    // Input second matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }

    // Calculate sum of matrices
    for(int i = 0; i < n;  i++){
        for(int j = 0; j < m; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Output the sum matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}

// Time Complexity: O(n * m)
// Space Complexity: O(n * m)