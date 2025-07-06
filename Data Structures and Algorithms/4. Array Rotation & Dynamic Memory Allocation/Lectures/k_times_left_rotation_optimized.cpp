#include <bits/stdc++.h>
using namespace std;

void reverse(int* arr, int start, int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k; cin >> k; // Number of times to rotate right
    k %= n; // To handle cases where k >= n

    reverse(arr, 0, k-1); // Reverse first k elements
    reverse(arr, k, n-1); // Reverse remaining n-k elements
    reverse(arr, 0, n-1); // Reverse the entire array

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

// This code rotates the array to the left k times.
// Time Complexity: O(n)
// Space Complexity: O(1) // Improves space efficiency by using in-place reversal