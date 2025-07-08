#include <bits/stdc++.h>
using namespace std;

// Problem - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X

int main(){
    int n, m; cin >> n >> m;

    char a[n][m];

    // Input matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int x, y; cin >> x >> y;
    x--; y--; // Convert to 0-based indexing
    
    bool yes = true;

    // Check top
    if(x > 0 and a[x-1][y] != 'x'){
        yes = false;
    }

    // Check top left corner
    if(x > 0 and y > 0 and a[x-1][y+1] != 'x'){
        yes = false;
    }

    // Check right
    if(y < m-1 and a[x][y+1] != 'x'){
        yes = false;
    }

    // check bottom right corner
    if(x < n-1 and y < m-1 and a[x+1][y+1] != 'x'){
        yes = false;
    }

    // Check bottom
    if(x < n-1 and a[x+1][y] != 'x'){
        yes = false;
    }

    // Check bottom left corner
    if(x < n-1 and y > 0 and a[x+1][y-1] != 'x'){
        yes = false;
    }

    // Check left
    if(y > 0 and a[x][y-1] != 'x'){
        yes = false;
    }

    // Check top left corner
    if(x > 0 and y > 0 and a[x-1][y-1] != 'x'){
        yes = false;
    }

    if(yes){
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}

// Time Complexity: O(n * m)
// Space Complexity: O(1) // excluding input storage