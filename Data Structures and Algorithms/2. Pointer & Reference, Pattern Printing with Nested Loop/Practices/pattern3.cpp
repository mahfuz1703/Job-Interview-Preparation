#include <bits/stdc++.h>
using namespace std;

/*
    Pattern 3: where n = 5
        *
       ***
      *****
     *******
    *********
*/

int main(){
    int n; cin >> n;
    
    int star = 1, space = n-1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= space; j++){
            cout <<" ";
        }
        for(int j = 1; j <= star; j++){
            cout << "*";
        }
        cout << endl;

        star += 2;
        space--;
    }
}