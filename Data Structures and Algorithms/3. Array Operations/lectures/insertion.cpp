#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n+1];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int indx, value; cin >> indx >> value;
    for(int i = n-1; i >= indx; i--){
        arr[i + 1] = arr[i];
    }
    arr[indx] = value;

    cout << "Array after insert " << value << " at index " << indx << "\n";
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }cout << "\n";
}

// Time Complexity: O(n)
// Space Complexity: O(1)