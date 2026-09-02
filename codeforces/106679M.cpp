#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;
using node = pair<ll, pair<ll, ll>>; 
int n; int m; int k;

ll djk(vector<vector<pair<ll, pair<ll,ll>>>> &adj){
    vector<vector<ll>> dist(n + 1, vector<ll>(k + 1, LLONG_MAX));
    priority_queue<node, vector<node>, greater<node>> pq;
    
    dist[1][0] = 0;
    pq.push({0, {1, 0}});
    
    while(!pq.empty()){
        node tp = pq.top(); 
        ll d = tp.first;
        ll nd = tp.second.first;
        ll micro = tp.second.second;
        pq.pop();
        if(nd == n){
            return d;
        }
        if(d > dist[nd][micro]) continue;
        for(auto &node : adj[nd]){
            ll end = node.first;
            ll fibra = node.second.first;
            ll mc = node.second.second;
            if(dist[nd][micro] + fibra < dist[end][micro]){
                dist[end][micro] = dist[nd][micro] + fibra;
                pq.push({dist[end][micro],{end, micro}});
            }
            if(mc == -1){
                continue;
            }
            if(micro < k){
                if(dist[nd][micro] + mc < dist[end][micro + 1]){
                    dist[end][micro + 1] = dist[nd][micro] + mc;
                    pq.push({dist[end][micro + 1], {end, micro + 1}});
                }
            }
        }
    }
    ll mn = LLONG_MAX;
    for(int i = 0; i < k; i++){
        mn = min(mn, dist[n][i]);
    }
    return mn;
}


void solve(){
    cin >> n >> m >> k;
    vector<vector<node>> adj(n + 1);
    
    for(int i = 0; i < m; i++){
        ll a; ll b; ll f; ll w;
        cin >> a >> b >> f >> w;
        adj[a].push_back({b, {f, w}});
        adj[b].push_back({a, {f, w}});
    }
    
    cout << djk(adj) << endl;


}
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t = 1;
    while(t--){
	solve();
    }


    return 0;
}



