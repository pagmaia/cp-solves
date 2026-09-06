#include <bits/stdc++.h>

#define ll long long

using namespace std;

void dfsRec(vector<vector<int>> &grafo, int posicao, vector<int> &tamanhos){
    for(int filho : grafo[posicao]){
        tamanhos[posicao] ++;
        dfsRec(grafo, filho, tamanhos);
        tamanhos[posicao] += tamanhos[filho];
    }
}

int main(){
    int funcionarios;
    cin >> funcionarios;
    vector<vector<int>> grafo(funcionarios + 1);
    for(int i = 2; i <= funcionarios; i++){
        int posicao;
        cin >> posicao;
        grafo[posicao].push_back(i);
    }
    vector<int> tamanhos(funcionarios + 1, 0);
    dfsRec(grafo, 1, tamanhos);
    for(int i = 1; i <= funcionarios; i++){
        cout << tamanhos[i] << " ";
    }
     
    return 0;
}