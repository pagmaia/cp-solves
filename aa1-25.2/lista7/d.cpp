#include <bits/stdc++.h>

#define ll long long

using namespace std;

void dfs(vector<vector<int>> &adj, vector<bool> &vis, vector<int> &tamanho, int pos, int k, int x, int &cortes){ 
    vis[pos] = true;
    tamanho[pos] = 1;
    for(int v : adj[pos]){
        if(!vis[v]){
            dfs(adj, vis, tamanho, v, k, x, cortes);
            tamanho[pos] += tamanho[v];
        }
    }

    if(tamanho[pos] >= x and cortes < k and pos != 1){
        cortes ++;
        tamanho[pos] = 0;
    }
    
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> adj(n + 1);
    vector<bool> vis(n + 1);
    vector<int> tamanho(n + 1);
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int cortes = 0;
    int ini = 1;
    int fim = n;
    int resposta = 0;

    while(ini <= fim){
        int mid = ini + (fim - ini) / 2;
        fill(tamanho.begin(), tamanho.end(), 0);
        fill(vis.begin(), vis.end(), false);
        dfs(adj, vis, tamanho, 1, k, mid, cortes);
        
        if(cortes >= k and tamanho[1] >= mid){
            resposta = mid;
            ini = mid + 1;
        }
        else{
            fim = mid - 1;
        }
        cortes = 0;
    }

    cout << resposta << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}