#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int MAX = 5e4 + 10;
vector<int> parent(MAX);
vector<int> tamanho(MAX);

int find_set(ll n){
    if(n == parent[n]) return n;

    return parent[n] = find_set(parent[n]);
}

void make_set(ll n){
    parent[n] = n;
    tamanho[n] = 1;
}

void union_set(ll a, ll b){
    a = find_set(a);
    b = find_set(b);

    if(a != b){
        if(tamanho[a] < tamanho[b]){
            swap(a, b);
        }
        parent[b] = a;
        tamanho[a] += tamanho[b];
    }

}

void solve(){
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        make_set(i);
    }

    vector<vector<ll>> arestas;
    for(int i = 0; i < m; i++){
        ll a, b, velocidade;
        cin >> a >> b >> velocidade;  
        arestas.push_back({a, b, velocidade});      

    }
    sort(arestas.begin(), arestas.end(), [](const vector<ll> &a, const vector<ll> &b){
        return a[2] > b[2];
    });
    
    
    for(vector<ll> &aresta : arestas){
        if(find_set(aresta[0]) != find_set(aresta[1])){
            union_set(aresta[0], aresta[1]);
        }
        if(find_set(1) == find_set(n)){
            cout << aresta[2] << "\n";
            return;
        }

    }

    cout << -1 << "\n";
    return;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}