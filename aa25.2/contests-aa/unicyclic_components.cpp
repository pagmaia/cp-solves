#include "bits/stdc++.h"

using namespace std;

void dfsRec(vector<vector<int>> &adj, vector<int> &visitados, int pos, pair<int, int> &arestavertice){
    visitados[pos] = true;
    arestavertice.second ++;
    arestavertice.first += adj[pos].size();

    for(int vizinho : adj[pos]){
        if(!visitados[vizinho]){
            dfsRec(adj, visitados, vizinho, arestavertice);
            }
    }

}

int main(){
    int vertices, arestas;
    cin >> vertices >> arestas;
    vector<vector<int>> adj(vertices + 1);
    vector<int> visitados(vertices + 1);

    for(int i = 0; i < arestas; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 1; i <= vertices; i++){
        if(!visitados[i]){
            pair<int, int> arestavertice;
            arestavertice.first = 0;
            arestavertice.second = 0;
            dfsRec(adj, visitados, i, arestavertice);
        
            if(arestavertice.first / 2 != arestavertice.second){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;



}
