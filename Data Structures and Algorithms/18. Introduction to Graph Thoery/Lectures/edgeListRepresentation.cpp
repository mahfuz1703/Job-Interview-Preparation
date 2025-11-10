#include <bits/stdc++.h>
using namespace std;

int main(){
    int node, edge;
    cin >> node >> edge;

    vector<pair<int, int>> edgeList;

    for(int i = 0; i < edge; i++){
        int u, v; cin >> u >> v;
        edgeList.push_back({u, v});
        edgeList.push_back({v, u}); // for undirected graph
    }

    for(auto edge : edgeList){
        cout << edge.first << " " << edge.second << endl;
    }

    return 0;
}