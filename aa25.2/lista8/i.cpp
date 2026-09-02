#include "bits/stdc++.h"

#define ll long long

using namespace std;


#include "bits/stdc++.h"
 
#define ll long long
 
using namespace std;
 
const int MAX = 10e5 + 10;
 
vector<int> parent(MAX);
vector<int> tamanho(MAX);
 
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

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, vector<int>>> arestas(m);
    map<pair<int, int>, int> conexoes;
    vector<bool> conectados(n + 1, false);
    
    for(int i = 1; i <= n; i++){
        make_set(i);
    }

    for(int i = 0; i < m; i++){
        int a, b, custo;
        cin >> a >> b >> custo;
        arestas[i] = {i, {a, b, custo}};
        if(!conexoes.count({a, custo})) conexoes[{a, custo}] = 0;
        if(!conexoes.count({b, custo})) conexoes[{b, custo}] = 0;
        conexoes[{a, custo}] ++;
        conexoes[{b, custo}] ++;
    }

    sort(arestas.begin(), arestas.end(),[](const auto &a, const auto &b){
        return a.second[2] < b.second[2];
    });

    vector<string> respostas(m);


    for(auto &aresta : arestas){
        int idx = aresta.first;
        int a = aresta.second[0];
        int b = aresta.second[1];
        int custo = aresta.second[2];
        if(find_set(a) != find_set(b)){
            if(conexoes[{a, custo}] > 1 and conectados[b]){
                respostas[idx] = "at least one";

            }
            else if(conexoes[{b, custo}] > 1 and conectados[a]){
                respostas[idx] = "at least one";
            }
            else{
                respostas[idx] = "any";
            }
            union_set(a, b);
            conectados[a] = true;
            conectados[b] = true;

        }
        else if(find_set(a) == find_set(b) and (conexoes[{a, custo}] > 1 or conexoes[{b, custo}] > 1)){
            respostas[idx] = "at least one";
        }

        else{
            respostas[idx] = "none";
        }
    }
    
    for(int i = 0; i < m; i++){
        cout << respostas[i] << "\n";
    }

    return 0;
}



