#include <bits/stdc++.h>
using namespace std;

/*
    Pattern 2: where n = 5
    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
    * * * * 
    * * * 
    * * 
    * 
*/

int main(){
    int n; cin >> n;
    
    int k = 1;
    for(int i = 1; i <= n * 2 - 1; i++){
        for(int j = 1; j <= k; j++){
            cout << j << " ";
        }
        cout << endl;

        if(i < n){
            k++;
        }else k--;
    }
}