#include "bits/stdc++.h"
 
#define ll long long
 
using namespace std;
 
const int MAX = 3010;
 
vector<int> parent(2 * MAX);
vector<int> tamanho(2 * MAX);
 
void make_set(int n){
    parent[n] = n;
    tamanho[n] = 1;
}
 
int find_set(int n){
    if(parent[n] == n) return n;
 
    return parent[n] = find_set(parent[n]);
}
 
void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
 
    if(a != b){
        if(tamanho[b] > tamanho[a]){
            swap(a, b);
        }
        parent[b] = a;
        tamanho[a] += tamanho[b];
    }
 
}
 
void solve(){
    int n;
    cin >> n;
    vector<pair<int, pair<int,int>>> arestas(n);
 
    for(int i = 1; i <= 2 * n; i++){
        make_set(i);
    }
 
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        arestas[i] = {i + 1, {a, b}};
    }
 
    sort(arestas.begin(), arestas.end(),[](const auto &a, const auto &b){
        return a.second.second < b.second.second;
    });
    
    vector<int> resposta;
    int inicio = arestas[0].second.first;
    int fim = arestas[0].second.second;
 
    for(int i = 0; i < n; i++){
        int a = arestas[i].second.first;
        int b = arestas[i].second.second;
 
        if(find_set(a) != find_set(b)){
            if(a <= fim and b > fim){
                fim = b;
            }
            resposta.push_back(arestas[i].first);
            union_set(a, b);
        }
    }
 
    cout << resposta.size() << "\n";
    for(int p : resposta){
        cout << p << " ";
    }
    cout << "\n";
 
}
 
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
 
 
    return 0;
}