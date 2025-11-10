#include <bits/stdc++.h>
using namespace std;

int adjMatrix[100][100];

int main(){
    int node, edge;
    cin >> node >> edge;

    for(int i = 0; i < edge; i++){
        int u, v; cin >> u >> v;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // for undirected graph
    }

    for(int i = 0; i < node; i++){
        for(int j = 0; j < node; j++){
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    int u, v;
    while(cin >> u >> v){
        if(adjMatrix[u][v] == 1){
            cout << "There is an edge between " << u << " and " << v << endl;
        }
        else{
            cout << "There is no edge between " << u << " and " << v << endl;
        }
    }
    return 0;
}