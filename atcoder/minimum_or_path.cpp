#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;


struct dsu{
    vector<int> parent;
    vector<int> sz;
    dsu(int n){
        parent.resize(n + 1);
        sz.resize(n + 1);
    }
    void make_set(int node){
        parent[node] = node;
        sz[node] = 1;
    }
    int find_set(int node){
        if(parent[node] == node) return node;
        return parent[node] = find_set(parent[node]);
    }
    void union_set(int a, int b){
        a = find_set(a);
        b = find_set(b);
        if(a != b){
            if(sz[b] > sz[a]) swap(a, b);
            parent[b] = a;
            sz[a] += sz[b];
        }
    }
};

void solve(){
    int n, m;
    cin >> n >> m;
    vector<pair<pair<int, int>, int>> a(m);
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        a[i] = {{u, v}, w};
    }
    
    int ans = 0;
    for(int bit = (1 << 29); bit >= 1; bit >>= 1){
        dsu dd(n);
        vector<pair<pair<int, int>, int>> del;
        for(int i = 1; i <= n; i++) dd.make_set(i);
        for(auto ar : a){
            int u = ar.first.first; int v = ar.first.second; int lb = ar.second;
            if(!(lb & bit)){
                dd.union_set(u, v);
                del.push_back(ar);
            }
        }
        if(dd.find_set(1) != dd.find_set(n)){
            ans |= bit;
        }
        else{
            a = del;
        }
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

