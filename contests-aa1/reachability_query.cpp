#include "bits/stdc++.h"

#define ll long long

using namespace std;

void dfsRec(int i, vector<vector<int>> &adj, vector<bool> &cores){
    cores[i] = true;

    for(int v : adj[i]){
        if(!cores[v]){
            dfsRec(v, adj, cores);
        }
    }
}
    
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<bool> cores(n + 1, false);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int t, v;
        cin >> t >> v;

        if(t == 1){
            if(!cores[v]) dfsRec(v, adj, cores);
        }

        else{
            if(!cores[v]) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }
    return 0;
}

