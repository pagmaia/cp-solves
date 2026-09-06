#include <bits/stdc++.h>

#define ll long long

using namespace std;

void bfs(vector<vector<int>> &grafo, vector<bool> &visitados, vector<int> &distance, vector<int> &anterior){
    queue<int> bfs;
    visitados[1] = true;
    bfs.push(1);

    while(!bfs.empty()){
        int ponta = bfs.front();
        bfs.pop();

        for(int vizinho : grafo[ponta]){
            if(!visitados[vizinho]){
                visitados[vizinho] = true;
                anterior[vizinho] = ponta;
                distance[vizinho] = distance[ponta] + 1;
                bfs.push(vizinho);
            }
        }
    }
}

int main(){
    int computador, conexao;
    cin >> computador >> conexao;

    vector<vector<int>> grafo(computador + 1);
    vector<bool> visitados(computador + 1, false);
    vector<int> distance(computador + 1, 0);
    vector<int> anterior(computador + 1);
    anterior[1] = 0;
    
    for(int i = 0; i < conexao; i++){
        int a, b;
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    bfs(grafo, visitados, distance, anterior);
    if(!visitados[computador]){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    int pos = computador;
    int tamanho = distance[pos] + 1;
    
    vector<int> caminho;
    caminho.push_back(pos);
    while(anterior[pos] != 0){
        caminho.push_back(anterior[pos]);
        pos = anterior[pos];
    }

    reverse(caminho.begin(), caminho.end());
    
    cout << tamanho << endl;
    for(int ponto : caminho){
        cout << ponto << " ";
    }

    
    return 0;
}