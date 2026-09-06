#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int MAX = 1e5 + 10;
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
    }
    parent[b] = a;
    tamanho[b] += tamanho[a];

}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        make_set(i);
    }

    vector<vector<ll>> arestas;
    for(int i = 0; i < m; i++){
        int a, b, custo;
        cin >> a >> b >> custo;  
        arestas.push_back({a, b, custo});      
        arestas.push_back({b, a, custo});   
    }
    sort(arestas.begin(), arestas.end(), [](const vector<ll> &a, const vector<ll> &b){
        return b[2] > a[2];
    });
    
    
    ll resposta = 0;
    for(vector<ll> &aresta : arestas){
        if(find_set(aresta[0]) != find_set(aresta[1])){
            resposta += aresta[2];
            union_set(aresta[0], aresta[1]);
        }
    }

    int a = find_set(1);
    for(int i = 1; i <= n; i++){
        if(find_set(i) != a){
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
    }

    cout << resposta << endl;

    
    return 0;
}