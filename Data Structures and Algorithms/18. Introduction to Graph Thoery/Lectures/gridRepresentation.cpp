#include <bits/stdc++.h>
using namespace std;

char grid[100][100];

int main(){
    int node, edge;
    cin >> node >> edge;

    for(int i = 0; i < node; i++){
        for(int j = 0; j < edge; i++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < node; i++){
        for(int j = 0; j < edge; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}