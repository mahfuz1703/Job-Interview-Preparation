#include <bits/stdc++.h>
using namespace std;

/*
    Pattern 1: where n = 5
    *
    * *
    * * *
    * * * *
    * * * * *
*/

int main(){
    int n; cin >> n;
    
    for(int i = 1; i <=  n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}