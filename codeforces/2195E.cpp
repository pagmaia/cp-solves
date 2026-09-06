#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;

ll MOD = 1000000000 + 7;
int SIZE = 300010;
vector<int> m(SIZE, -1);
vector<pair<int, int>> adj(SIZE);
vector<int> p(SIZE);
vector<int> ans(SIZE, -1);

void dfs(int s, int node, int par){
    ans[s] = (ans[s] + 1) % MOD;
    if(node == 0){
        return;
    }
    if(adj[node].first == 0 and adj[node].second == 0){
        dfs(s, par, p[p[node]]);
    }
    else if(!m[node]){
        m[node] = 1;
        dfs(s, adj[node].second, node);
    }
    else if(m[node] == -1){
        m[node] = 0;
        dfs(s, adj[node].first, node);
    }
    else if(m[node] == 1){
        m[node] = -1;
        dfs(s, p[node], p[p[node]]);
    }

}

void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int l, r;
        cin >> l >> r;
        if(l != 0){
            adj[i].first = l;
            p[l] = i;
        }
        if(r != 0){
            adj[i].second = r;
            p[r] = i;
        }
    }
    
    for(int i = 1; i <= n; i++){
        if(adj[i].first == 0 and adj[i].second == 0){
            int par = p[i];
            if(ans[adj[par].second] != -1 and !adj[adj[par].second].first and !adj[adj[par].second].second){
                ans[i] = ans[adj[par].second];
                continue;
            }
            else if(ans[adj[par].first] != -1 and !adj[adj[par].first].first and !adj[adj[par].first].second){
                ans[i] = ans[adj[par].first];
                cout << ans[i] << " ";
                continue;
            }
        }
        dfs(i, i, p[i]);
        cout << ans[i] << " ";
    }
    cout << endl;
    fill(m.begin(), m.begin() + n + 1, -1);
    fill(p.begin(), p.begin() + n + 1, 0);
    fill(adj.begin(), adj.begin() + n + 1, make_pair(0, 0));
    fill(ans.begin(), ans.begin() + n + 1, -1);

}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
	solve();
    }
 
 
    return 0;
}

