#include <bits/stdc++.h>
using namespace std;

// Merge array
void Merge(int arr[], int left, int mid, int right){
    int i = left; // starting index of left subarray
    int j = mid + 1; // starting index of right subarray
    int k = 0; // starting index of temporary merged array
    int temp[right - left + 1]; // temporary array

    while(i <= mid and j <= right){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }

    // copy the remaining elements of left subarray, if any
    while(i <= mid){
        temp[k++] = arr[i++];
    }

    // copy the remaining elements of right subarray, if any
    while(j <= right){
        temp[k++] = arr[j++];
    }

    // copy the sorted subarray into the original array
    for(int i = left, k = 0; i <= right; i++, k++){
        arr[i] = temp[k];
    }
}

// Merge Sort
void MergeSort(int arr[], int left, int right){
    if (left == right) return; // base case

    int mid = (left + right) / 2; // find the mid point

    MergeSort(arr, left, mid); // sort the left subarray
    MergeSort(arr, mid + 1, right); // sort the right subarray

    Merge(arr, left, mid, right); // merge the sorted subarrays
}

int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array
    MergeSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity - O(n log n)
// Space Complexity - O(n) // for temporary array