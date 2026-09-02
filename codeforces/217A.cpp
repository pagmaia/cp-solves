#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

vector<int> parent(1000);
vector<int> sz(1000);

void make_set(int a){
    sz[a] = 1;
    parent[a] = a;
}

int find_set(int v){
    if(v == parent[v]){
        return v;
    }
    return parent[v] =   find_set(parent[v]);
}

void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a != b){
        if(sz[a] < sz[b]){
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
}

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> pos(n + 1);

    for(int i = 1; i <= n; i++){
        int a; int b;
        cin >> a >> b;
        pos[i] = make_pair(a, b);
        make_set(i);
    }
    
    map<int, int> x;
    map<int, int> y;
    int ans = n;
    for(int i = 1; i <= n; i++){
        if(x.count(pos[i].first)){
            if(find_set(i) != find_set(x[pos[i].first])){
                union_set(i, x[pos[i].first]);
                ans--;
            }
        }
        else{
            x[pos[i].first] = i;
        }
        if(y.count(pos[i].second)){
            if(find_set(i) != find_set(y[pos[i].second])){
                union_set(i, y[pos[i].second]);
                ans--;
            }
        }
        else{
            y[pos[i].second] = i;
        }
    }
    cout << ans - 1 << endl;

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



