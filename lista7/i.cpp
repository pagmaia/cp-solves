#include <bits/stdc++.h>

#define ll long long

using namespace std;

void dfs(vector<vector<int>> &adj, vector<bool> &vis, vector<int> &distancia, int pos){
    vis[pos] = true;
    for(int v : adj[pos]){
        if(!vis[v]){
            distancia[v] = distancia[pos] + 1;
            dfs(adj, vis, distancia, v);
        }
    }
}

void solve(){
    int n, st, trap;
    cin >> n >> st >> trap;
    vector<vector<int>> adj(n + 1);
    vector<bool> vis(n + 1);
    vector<int> distancia(n + 1);
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    distancia[trap] = 0;
    dfs(adj, vis, distancia, trap);
    vector<vector<int>> distancias(n + 1);
    for(int i = 1; i <= n; i++){
        distancias[distancia[i]].push_back(i);
    }
    
    for(int i = n; i >= 0; i--){
        for(int node : distancias[i]){
            cout << node << " ";
        }
    }
    cout << "\n";
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}