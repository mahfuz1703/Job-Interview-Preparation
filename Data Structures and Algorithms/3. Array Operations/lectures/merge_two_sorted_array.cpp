#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int m; cin  >> m;
    int b[m];
    for(int i = 0; i < m; i++){
        cin >>  b[i];
    }

    int final[n+m];
    int indx = 0, l = 0, r = 0;
    while(l < n and r < m){
        if(a[l] <= b[r]){
            final[indx++] = a[l++];
        }
        else{
            final[indx++] = b[r++];
        }
    }

    for(int i = l;  i < n; i++){
        final[indx++] = a[i];
    }

    for(int i = r; i < m;  i++){
        final[indx++] = b[i];
    }

    cout << "Array after merge.\n";
    for(int i = 0; i < n+m; i++){
        cout << final[i] << " ";
    }cout << "\n";
}

// Time Complexity: O(n + m) or O(max(n, m))
// Space Complexity: O(n + m)