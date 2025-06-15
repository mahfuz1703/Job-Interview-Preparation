#include <bits/stdc++.h>
using namespace std;

// Function to reverse a portion of the array

// Time Complexity: O(n)
// Space Complexity: O(1)
void rotateArray(int arr[], int n, int k) {
    k = k % n;
    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateArray(arr, n, k);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}