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

    int firstDiagonalSum = 0, secondDiagonalSum = 0;
    for(int i = 0; i < n; i++){
        firstDiagonalSum += arr[i][i]; // Sum of the first diagonal
        secondDiagonalSum += arr[i][m - 1 - i]; // Sum of the second diagonal

        if(m - 1 - i == i){
            // If both diagonals meet at the same element then we should not double count it
            secondDiagonalSum -= arr[i][i];
        }
    }

    cout << firstDiagonalSum + secondDiagonalSum << endl;
    return 0;
}

// This code calculates the sum of both diagonals in a 2D matrix.
// Time Complexity: O(n)
// Space Complexity: O(1) (excluding input storage)