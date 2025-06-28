#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // for(int i = 0; i < n/2; i++){
    //     swap(arr[i], arr[n-i-1]);
    // }

    
    // Using two pointer approach
    int start = 0, end = n-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "Array after reverse.\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << "\n";
}

// Time Complexity: O(n)
// Space Complexity: O(1)