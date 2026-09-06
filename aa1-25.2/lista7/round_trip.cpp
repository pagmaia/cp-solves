#include "bits/stdc++.h"

using namespace std;

const int MAX = 200000;
vector<vector<int>> adj(MAX);
vector<bool> visitados(MAX);

bool dfsRec(int pos, queue<int> &caminho){
    visitados[pos] = true;
    caminho.push(pos);

    for(int vizinho : adj[pos]){
        
        if(caminho.front() == vizinho and caminho.size() < 4){
            continue;
        }
        else if(caminho.front() == vizinho and caminho.size() >= 4){
            caminho.push(vizinho);
            return false;
        }

        if(!visitados[vizinho]){
            if(!dfsRec(vizinho, caminho)){
                return false;
            }
                
        }
    }

    return true;

}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for(int i = 1; i <= n; i++){
        if(!visitados[i]){
            queue<int> caminho;
            if(!dfsRec(i, caminho)){
                cout << caminho.size() << endl;
                while(!caminho.empty()){
                    cout << caminho.front() << " ";
                    caminho.pop();
                }
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;



}