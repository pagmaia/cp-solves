#include "bits/stdc++.h"

#define ll long long

using namespace std;

const int MAX = 10e5 + 10;

int dfs(vector<vector<int>> &adj, vector<bool> &vis, vector<int> &subtree, int i){
    int tamanho = 1;
    vis[i] = true;

    for(int v : adj[i]){
        if(!vis[v]){
            tamanho += dfs(adj, vis, subtree, v);
        }
    }
    subtree[i] = tamanho;
    return tamanho;
}


void solve(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> adj(MAX);
    vector<bool> vis(MAX);
    vector<int> subtree(MAX);

    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int ini = 1;
    int fim = n;
    while(ini <= fim){
        int mid = ini + (fim - ini) / 2;
        dfs(adj, vis, subtree, 1);


    }





}



int main(){
    int t;
    cin >> t;
    while(t--){
	solve();
    }


    return 0;
}



