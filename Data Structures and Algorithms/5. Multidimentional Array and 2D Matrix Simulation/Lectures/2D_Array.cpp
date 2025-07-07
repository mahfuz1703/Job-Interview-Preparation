#include <bits/stdc++.h>
using namespace std;

int main(){
    // Declare a 2D array with 3 rows and 4 columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the elements of the array
    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 4; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int n, m; cin >> n >> m; // Input the dimensions of the 2D array
    int arr2[n][m]; // Declare a 2D array with user-defined dimensions
    // Input elements into the 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr2[i][j];
        }
    }

    // Print the elements of the user-defined 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}