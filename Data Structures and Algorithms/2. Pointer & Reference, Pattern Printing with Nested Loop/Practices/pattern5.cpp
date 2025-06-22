#include <bits/stdc++.h>
using namespace std;

/*
    Pattern 5: where n = 5
    ***** *****
    ****   ****
    ***     ***
    **       **
    *         *
    **       **
    ***     ***
    ****   ****
    ***** *****
*/

int main(){
    int n; cin >> n;
    
    int star = n, space = 1;
    for(int i = 1; i <= n * 2 - 1; i++){
        for(int j = 1; j <= star; j++){
            cout <<"*";
        }
        for(int j = 1; j <= space; j++){
            cout <<" ";
        }
        for(int j = 1; j <= star; j++){
            cout << "*";
        }
        cout << endl;

        if(i < n){
            star--;
            space += 2;
        }else{
            star++;
            space -= 2;
        }
    }
}