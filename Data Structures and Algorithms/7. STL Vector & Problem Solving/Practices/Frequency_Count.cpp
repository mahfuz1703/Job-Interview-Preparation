#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);

    for(int &x : v){
        cin >> x;
    }

    vector<int> freq(101, 0); // Assuming the range of elements is 0 to 100
    for(int x : v){
        freq[x]++;
    }
    
    sort(v.begin(), v.end()); // Sort the vector to maintain order
    auto last = unique(v.begin(), v.end()); // Remove duplicates
    v.erase(last, v.end()); // Erase the duplicates

    // Output the unique elements and their frequencies
    for(int x : v){
        cout << x << ": " << freq[x] << endl;
    }

    return 0;
}

// Time Complexity: O(n log n)
// Space Complexity: O(1)