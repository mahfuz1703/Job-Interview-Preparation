#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int tmp = arr[0];
    for(int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = tmp;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

// This code rotates the array to the left by one position.
// Time Complexity: O(n)
// Space Complexity: O(1)