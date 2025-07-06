#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;

    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int newSize = 10;
    int *newArr = new int[newSize];
    for(int i = 0; i < n; i++){
        newArr[i] = arr[i];
    }
    delete[] arr; // Free the old array memory
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " "; // This will not work as arr is deleted
    // }cout << endl;

    newArr[5] = 10; // Adding some extra elements

    for(int i = 0; i < newSize; i++){
        cout << newArr[i] << " ";
    }cout << endl;
}