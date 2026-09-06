#include "bits/stdc++.h"

#define ll long long

using namespace std;


const int MAX = 2e5 + 10;;


void make_set(int n, vector<int> &parent, vector<int> &tamanho){
    parent[n] = n;
    tamanho[n] = 1;
}
 
int find_set(int n, vector<int> &parent, vector<int> &tamanho){
    if(parent[n] == n) return n;
 
    return parent[n] = find_set(parent[n], parent, tamanho);
}
 
void union_set(int a, int b, vector<int> &parent, vector<int> &tamanho){
    a = find_set(a, parent, tamanho);
    b = find_set(b, parent, tamanho);
 
    if(a != b){
        if(tamanho[b] > tamanho[a]){
            swap(a, b);
        }
        parent[b] = a;
        tamanho[a] += tamanho[b];
    }
 
}

void solve(){
    int n, m1, m2;
    cin >> n >> m1 >> m2;

    vector<int> parentF(n + 1);
    vector<int> parentG(n + 1);
    vector<int> tamanhoG(n + 1);
    vector<int> tamanhoF(n + 1);

    set<pair<int, int>> f;
    for(int i = 0; i < m1; i++){
        int a, b;
        cin >> a >> b;
        f.insert({a, b});
    }

    for(int i = 1; i <= n; i++){
        make_set(i, parentG, tamanhoG);
        make_set(i, parentF, tamanhoF);
    }

    set<pair<int, int>> g;
    for(int i = 0; i < m2; i++){
        int a, b;
        cin >> a >> b;
        union_set(a, b, parentG, tamanhoG);
        g.insert({a, b});
    }
    
    int resposta = 0;

    for(auto p : f){
        int a = p.first;
        int b = p.second;
        if(find_set(a, parentG, tamanhoG) != find_set(b, parentG, tamanhoG)){
            resposta ++;
        }
        else{
            union_set(a, b, parentF, tamanhoF);
        }
            
    }

    for(auto p: g){
        int a = p.first;
        int b = p.second;
        if(find_set(a, parentF, tamanhoF) != find_set(b, parentF, tamanhoF)){
            union_set(a, b, parentF, tamanhoF);
            resposta ++;
        }
    }

    cout << resposta << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
	    solve();
    }


    return 0;
}



