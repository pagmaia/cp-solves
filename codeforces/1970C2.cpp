#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;
void dfs(ll s, ll p, vector<vector<ll>> &adj, vector<bool> &dp){
    dp[s] = false;
    for(auto v : adj[s]){
        if(v != p){
            dfs(v, s, adj, dp);
            if(!dp[v]){
                dp[s] = true;
            }
        }
    }
    
}

void dfs2(ll s, ll p, vector<vector<ll>> &adj, vector<bool> &dp){
    if(p != 0){
        if(dp[p] and !dp[s]){
            dp[s] = true;
        }
    }

    for(auto v : adj[s]){
        if(v != p){
            dfs2(v, s, adj, dp);
        }
    }
}


void solve(){
    ll n, t;
    cin >> n >> t;
    vector<vector<ll>> adj(n + 1);
    for(int i = 0; i < n - 1; i++){
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> dp(n + 1);
    dfs(1, 0, adj, dp);
    dfs2(1, 0, adj, dp);
    for(int i = 0; i < t; i++){
        ll s;
        cin >> s;
        if(dp[s]){
            cout << "Ron" << endl;
        }
        else{
            cout << "Hermione" << endl;
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
	solve();

    return 0;
}



