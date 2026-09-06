#include <bits/stdc++.h>

#define ll long long

using namespace std;

map<ll, vector<ll>> adj;
map<int, bool> vis;
ll resposta = 1;

void dfs(int i){
    vis[i] = true;
    for(int v : adj[i]){
        if(!vis[v]){
            if(v > resposta){
                resposta = v;
            }
            dfs(v);
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        vis[a] = false;
        vis[b] = false;
    }
    dfs(1);
    cout << resposta;
}