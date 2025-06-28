#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool isSorted = true;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted){
        cout << "Array is sorted.\n";
    } else {
        cout << "Array is not sorted.\n";
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)