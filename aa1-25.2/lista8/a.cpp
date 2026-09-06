#include "bits/stdc++.h"

#define ll long long

using namespace std;

const int MAX = 2e5 + 10;

vector<int> parent(MAX);
vector<int> tamanho(MAX);

void make_set(int n){
    parent[n] = n;
    tamanho[n] = 1;
}

int find_set(int n){
    if(n == parent[n]) return n;
    return parent[n] = find_set(parent[n]);

}

void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);

    if(a != b){
        if(tamanho[b] > tamanho[a]){
            swap(a, b);
        }
    }
    parent[b] = a;
    tamanho[a] += tamanho[b];

}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<ll>> arestas(m);

    for(int i = 0; i < m; i++){
        ll a, b, label;
        cin >> a >> b >> label;
        arestas[i] = {a, b, label};
    }

    ll resposta = (1 << 30) - 1;

    for(int i = 29; i >= 0; i--){
        resposta ^= 1 << i;

        for(int i = 1; i <= n; i++){
            make_set(i);
        }

        for(vector<ll> aresta : arestas){
            if((resposta | aresta[2]) == resposta){
                union_set(aresta[0], aresta[1]);
            }
        }
        if(find_set(1) != find_set(n)){
            resposta |= 1 << i;
            
        }
    }
    
    cout << resposta << endl;
    


    return 0;
}



