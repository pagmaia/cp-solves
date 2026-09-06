#include "bits/stdc++.h"

#define ll long long

using namespace std;

const int MAX = 15e4 + 10;

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
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        make_set(i);
    }

    map<int, vector<int>> conjuntos;
    
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;

        a = find_set(a);
        b = find_set(b);

        if(tamanho[a] == 1 and tamanho[b] == 1){
            conjuntos[a] = {a, b};      
        }
        else if(tamanho[a] >= tamanho[b]){
            if(conjuntos.count(b)){
                conjuntos[a].insert(conjuntos[a].end(), conjuntos[b].begin(), conjuntos[b].end());
                conjuntos.erase(b);
            }
            else{
                conjuntos[a].push_back(b);
            }
        }
        else{
            if(conjuntos.count(a)){
                conjuntos[b].insert(conjuntos[b].end(), conjuntos[a].begin(), conjuntos[a].end());
                conjuntos.erase(a);
            }
            else{
                conjuntos[b].push_back(a);
            }
        }
        union_set(a, b);  
        
    }
    for(auto const pair : conjuntos){
        for(int value : pair.second){
            cout << value << " ";
        }
    }

    return 0;
}



