#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k; cin >> k; // Number of times to rotate right
    k %= n; // To handle cases where k >= n

    int ans[n];
    for(int i = 0; i < n; i++){
        ans[(i + k) % n] = arr[i]; // Calculate new index after rotation
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }cout << endl;
}

// This code rotates the array to the right k times.
// Time Complexity: O(n)
// Space Complexity: O(n)