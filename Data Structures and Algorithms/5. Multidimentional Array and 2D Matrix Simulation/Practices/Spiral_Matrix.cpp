#include <bits/stdc++.h>
using namespace std;

// Problem - https://leetcode.com/problems/spiral-matrix/description/

int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int sr = 0, er = n - 1, sc = 0, ec = m - 1;
    
    while(sr <= er and sc <= ec){
            // print top
        for(int i = sc; i <= ec; i++){
            cout << arr[sr][i] << " ";
        }

        // print right
        for(int i = sr + 1; i <= er; i++){
            cout << arr[i][ec] << " ";
        }

        // print bottom
        if(sr < er){
            for(int i = ec - 1; i >= sc; i--){
                cout << arr[er][i] << " ";
            }
        }

        // print left
        if(sc < ec){
            for(int i = er - 1; i > sr; i--){
                cout << arr[i][sc] << " ";
            }
        }

        sr++;
        er--;

        sc++;
        ec--;
    }
}