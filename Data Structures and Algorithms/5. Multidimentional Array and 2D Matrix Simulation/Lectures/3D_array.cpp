#include <bits/stdc++.h>
using namespace std;

int main(){
    // Declare a 3D array with 2 layers, 3 rows, and 4 columns
    int arr[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        },
    };

    // Print the elements of the 3D array
    for(int i = 0; i < 2; i++) {
        cout << "Layer " << i + 1 << " start here." << endl;
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 4; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}