#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
void dfs(ll node, ll p, vector<vector<ll>> &adj, vector<pair<ll, ll>> &dp, vector<ll> &a){
    if(node != 1){
        dp[node].first = max(a[node], a[node] + (dp[p].second * -1));
        dp[node].second = min(a[node], a[node] + (dp[p].first * -1));
    }

    for(ll v : adj[node]){
        if(v != p){
            dfs(v, node, adj, dp, a);
        }
    }
}

void solve(){
    ll n; 
    cin >> n;
    vector<ll> t(n + 1);
    for(ll i = 1; i <= n; i++){
        cin >> t[i];
    }
    
    vector<vector<ll>> adj(n + 1);
    vector<pair<ll, ll>> dp(n + 1);
    dp[1].first = t[1];
    dp[1].second = t[1];
    
    for(ll i = 0; i < n - 1; i++){
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool add = false;
    dfs(1, -1, adj, dp, t);
    for(ll i = 1; i < dp.size(); i++){
        cout << dp[i].first << " ";
    }
    cout << endl;
}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--){
	    solve();
    }
 
 
    return 0;
}

