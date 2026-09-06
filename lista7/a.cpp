#include <bits/stdc++.h>

#define ll long long

using namespace std;


void dfsRec(vector<vector<int>> &grafo, vector<bool> &visitados, int pos){
    visitados[pos] = true;
    for(int node : grafo[pos]){
        if(!visitados[node]){
            dfsRec(grafo, visitados, node);
        }
    }

}

int main(){
    int cidades, ruas;
    cin >> cidades >> ruas;
    vector<vector<int>> grafo(cidades + 1);
    vector<bool> visitados(cidades + 1, false);

    for(int i = 0; i < ruas; i++){
        int a, b;
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    vector<pair<int, int>> ans;
    dfsRec(grafo, visitados, 1);
    int ruasnovas = 0;
    for(int i = 2; i <= cidades; i++){
        if(!visitados[i]){
            ruasnovas ++;
            ans.push_back({1, i});
            dfsRec(grafo, visitados, i);
        }
    }

    cout << ruasnovas << endl;
    for(const auto& pair : ans){
        cout << pair.first << " " << pair.second << endl;
    }
    
    return 0;
}