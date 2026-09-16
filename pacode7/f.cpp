#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;

vector<vector<pair<ll, ll>>> adj;
ll n; ll MAX = 1e12;

vector<vector<ll>> fw(){
    vector<vector<ll>> dist(n + 1, vector<ll>(n + 1, MAX));
    for(int i = 1; i <= n; i++){
        dist[i][i] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(auto p : adj[i]){
            dist[i][p.first] = min(dist[i][p.first], p.second);
        }
    }

    for(int k = 0; k <= n; k++){
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= n; j++){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    return dist;
}

void solve(){
    ll m, a;
    cin >> n >> m >> a;
    adj.resize(n + 1);
    for(int i = 0; i < m; i++){
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    vector<ll> am(a);
    for(int i = 0; i < a; i++) cin >> am[i];
    sort(am.begin(), am.end());
    auto dists = fw();
    ll ans = MAX;
    ll aux = 0; 
    aux += dists[1][am[0]];
    for(int i = 0; i < a - 1; i++){
        aux += dists[am[i]][am[i + 1]];
    }
    aux += dists[am[a - 1]][n];
    ans = min(aux, ans);

    while(next_permutation(am.begin(), am.end())){
        ll d = 0;
        d += dists[1][am[0]];
        for(int i = 0; i < a - 1; i++){
           d += dists[am[i]][am[i + 1]];
        }
        d += dists[am[a - 1]][n];
        ans = min(d, ans);
    }
    cout << ans << endl;

}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t = 1;
    //cin >> t;
    while(t--){
		solve();
    }
 
 
    return 0;
}

