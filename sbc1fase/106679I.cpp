#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;
map<ll, ll> a;
map<ll, ll> parent;
map<ll, int> vis;

ll compress(ll node){
    if(parent.find(node) == parent.end()){
        return -1;
    }
    ll par = parent[node];
    if(par == -1) return -1;
    if(par == -2) return node;

    if(vis[node] == 1) return parent[node] = -1;
    vis[node] = 1;

    ll org = compress(par);
    vis[node] = 2;
    if(org == -1) parent[node] = -1;
    else parent[node] = org;
    return parent[node];
    
}

void solve(){
    int f; int n;
    cin >> f >> n;
    vector<ll> seq;
    for(int i= 0; i < n; i++){
        ll x; ll g;
        cin >> x >> g;
        a[x] = g;
        seq.push_back(x);
    }
    vector<pair<ll, pair<ll, ll>>> acp;
    for(int i = 0; i < n; i++){
        char d; cin >> d;
        if(d == 'D'){
            parent[seq[i]] = -1;
        }
        else if(d == 'A'){
            ll x; ll y;
            cin >> x >> y;
            acp.push_back({seq[i], {x, y + x}});
            parent[seq[i]] = -2;
        }
        else if(d == 'T'){
            ll g; cin >> g;
            parent[seq[i]] = g;     
        }
    }
    for(ll i : seq){
        ll par = compress(i);
        if(par != -1 and par != i){
            a[par] += a[i];
        }
    }
    ll ans = 0;
    ll curr = 0;
    vector<pair<ll, ll>> log;
    for(auto p : acp){
        log.push_back({p.second.first, a[p.first]});
        log.push_back({p.second.second, a[p.first] * -1});
    }
    sort(log.begin(), log.end());
    for(auto entry : log){
        curr += entry.second;
        ans = max(curr, ans);
    }
    cout << ans << endl;
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



