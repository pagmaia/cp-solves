#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;
ll n; ll m;

void djk(vector<vector<pair<ll,ll>>> &adj){
    vector<ll> dist(n + 1, LLONG_MAX);
    dist[1] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    vector<ll> parent(n + 1, -1);
    pq.push({0, 1});
    while(!pq.empty()){
        auto tp = pq.top();
        ll dis = tp.first;
        ll node = tp.second;
        pq.pop();
        if(dis > dist[node]){
            continue;
        }
        if(node == n){
            break;
        }
        for(auto &p : adj[node]){
            ll dest = p.first;
            ll cost = p.second;
            if(dist[node] + cost < dist[dest]){
                dist[dest] = dist[node] + cost;
                parent[dest] = node;
                pq.push({dist[dest], dest});
            }
        }
    }
    if(dist[n] == LLONG_MAX){
        cout << -1 << endl;
        return;
    }

    vector<ll> path;
    for(ll i = n; i != -1; i = parent[i]){
        path.push_back(i);
    }
    reverse(path.begin(), path.end());
    for(ll p : path){
        cout << p << " ";
    }
    cout << endl;
}

void solve(){
    cin >> n >> m;
    vector<vector<pair<ll, ll>>> adj(n + 1);
    for(int i = 0; i < m; i++){
        ll a; ll b; ll c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c}); 
    }
    djk(adj);
}

int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    ll t = 1;
    while(t--){
	solve();
    }


    return 0;
}



