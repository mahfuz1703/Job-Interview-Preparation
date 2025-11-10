#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[100];

int main(){
    int node, edge;
    cin >> node >> edge;

    for(int i = 0; i < edge; i++){
        int u, v; cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // for undirected graph
    }

    for(int i = 1; i <= node; i++){
        cout << i << " -> ";
        for(int j : adjList[i]){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}