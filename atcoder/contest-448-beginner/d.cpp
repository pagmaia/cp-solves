#include "bits/stdc++.h"

#define ll long long

using namespace std;

const int MAX = 2e5 + 10;

vector<vector<ll>> adj(MAX);
vector<bool> ans(MAX);

void dfs(int i, vector<bool> &vis, set<ll> &visto, vector<ll> &num){
    vis[i] = true;
    bool par = false;
    
    if(!visto.count(num[i])){
        visto.insert(num[i]);
        par = true;
    }
    else{
        ans[i] = true;
    }

    for(int pos : adj[i]){
        if(!vis[pos]){
            ans[pos] = ans[i];
            dfs(pos, vis, visto, num);
        }
    }

    if(par){
        visto.erase(num[i]);
    }
    
}

// 1 2 3 4 5
// 1 6 3 8 9 7 10 2 4 5

int main(){
    int n;
    cin >> n;
    vector<ll> num(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> num[i];
    }
    
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector<bool> vis(n + 1);
    set<ll> visto;
    dfs(1, vis, visto, num);

    for(int i = 1; i <= n; i++){
        if(ans[i]){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }

    return 0;
}



