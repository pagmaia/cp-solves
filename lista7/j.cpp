#include "bits/stdc++.h"

using namespace std;

void dfsRec(int pos, int parente, vector<int> &caminho, vector<vector<int>> &adj, vector<bool> &visitados, bool &resposta){
    if(resposta){
        return;
    }

    if(visitados[pos]){
        if(caminho.size() > 2){
            resposta = true; 
            int tamanho = 1;
            string ans = "";
            ans += to_string(pos) + " ";
            for(int i = caminho.size() - 1; i >= 0; i--){
                tamanho ++;
                if(caminho[i] == pos){
                    break;
                }
                ans += to_string(caminho[i]) + " ";
            }
            ans += to_string(pos) + " ";
            cout << tamanho << endl;
            cout << ans;
        }
        return;
    }

    visitados[pos] = true;
    caminho.push_back(pos);
    for(int vizinho : adj[pos]){
        if(vizinho == parente){
            continue;
        }
        dfsRec(vizinho, pos, caminho, adj, visitados, resposta);   
    }
    caminho.pop_back();
    
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<bool> visitados(n + 1);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool resposta = false;
    for(int i = 1; i <= n; i++){
        if(!visitados[i]){
            vector<int> caminho;
            dfsRec(i, -1, caminho, adj, visitados, resposta);
        } 
    }

    
    if(!resposta){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
}