#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);

    for(int &x : v){
        cin >> x;
    }

    // Sort the vector
    sort(v.begin(), v.end()); // O(n log n)

    // Remove duplicates
    auto last = unique(v.begin(), v.end()); // O(n)
    v.erase(last, v.end()); // O(n)

    // Output the modified vector
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity: O(n log n)
// Space Complexity: O(1)