#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int MAX = 2e5 + 10;

vector<vector<pair<int,int>>> adj(MAX);
vector<ll> dist(MAX, -1);

int idxponta = -1;
ll maiordistancia = -1;

void dfsRec(int i){
    for(auto vizinho : adj[i]){
        if(dist[vizinho.first] == -1){
            dist[vizinho.first] += vizinho.second + dist[i] + 1;
            if(dist[vizinho.first] > maiordistancia){
                maiordistancia = dist[vizinho.first];
                idxponta = vizinho.first;
            }
            dfsRec(vizinho.first);      
        }
    }
}

int main(){
    int n;
    cin >> n;
    ll custo = 0;

    for(int i = 0; i < n - 1; i++){
        int a, b, dista;
        cin >> a >> b >> dista;
        adj[a].push_back({b, dista});
        adj[b].push_back({a, dista});
        custo += 2 * dista;
    }

    dist[1] = 0;
    dfsRec(1);
    
    int idxponta1 = idxponta;
    idxponta = -1;
    maiordistancia = -1;

    fill(dist.begin(), dist.end(), -1);
    dist[idxponta1] = 0;

    dfsRec(idxponta1);

    cout << custo - dist[idxponta] << endl;

    return 0;
}