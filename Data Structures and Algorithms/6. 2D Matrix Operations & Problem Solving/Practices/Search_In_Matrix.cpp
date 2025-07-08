#include <bits/stdc++.h>
using namespace std;

// Problem - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

int main(){
    int n, m; cin >> n >> m;

    int a[n][m];

    // Input first matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    // Search for a number in the matrix
    int x; cin >> x;
    bool found = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == x){
                found = true;
                break;
            }
        }
    }

    if(found){
        cout << "will not take number" << endl;
    } else {
        cout << "will take number" << endl;
    }

    return 0;
}

// Time Complexity: O(n * m)
// Space Complexity: O(1)