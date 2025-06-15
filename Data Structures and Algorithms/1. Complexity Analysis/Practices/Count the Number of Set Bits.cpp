#include <bits/stdc++.h>
using namespace std;


// Time complexity: O(log n) // because we are shifting bits
// Space complexity: O(1) // no extra space used
int countSetBits(int n){
    int cnt = 0;

    while(n > 0){
        cnt += (n & 1);
        n >>= 1; // Right shift n by 1 bit
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;

    int result = countSetBits(n);
    cout << "Number of set bits in " << n << " is: " << result << endl;

    return 0;
}