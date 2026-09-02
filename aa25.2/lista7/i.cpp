#include "bits/stdc++.h"

#define ll long long

using namespace std;

const int MAX = 10e5 + 10;
vector<vector<int>> adj(MAX);
vector<int> parent(MAX);
vector<bool> vis(MAX);

void dfsRec(int pos, int parente){
    vis[pos] = true;
    parent[pos] = parente;

    for(int v : adj[pos]){
        if(!vis[v]){
            dfsRec(v, parente);
        }
    }
}



void solve(){
    int n, st, trap;
    cin >> n >> st >> trap;

    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfsRec(1, 0);
    string resposta = "";
    int mouse = st;
    for(int i = 0; i < n; i++){
        if(parent[mouse] = 0){
            cout << mouse << " ";
        }
        else{
            
        }
        

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



