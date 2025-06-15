#include <bits/stdc++.h>
using namespace std;


// Time Complexity: O(n1 + n2)
// Space Complexity: O(n1) for storing elements of arr1 in a set
vector<int> intersection(int arr1[], int arr2[], int n1, int n2) {
    unordered_set<int> set(arr1, arr1 + n1);
    vector<int> result;
    for (int i = 0; i < n2; i++) {
        if (set.find(arr2[i]) != set.end()) {
            result.push_back(arr2[i]);
            set.erase(arr2[i]);  // Ensure unique elements in the result
        }
    }
    return result;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[n1], arr2[n2];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> result = intersection(arr1, arr2, n1, n2);

    cout << "Intersection of the two arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}