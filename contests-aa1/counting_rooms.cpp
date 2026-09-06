#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool dfsValido(int altura, int largura, int alturamax, int larguramax, vector<vector<bool>> &apartamento, vector<vector<bool>> &visitados){
    if((altura < 0 or altura >= alturamax) or largura < 0 or largura >= larguramax){
        return false;
    }

    if(!apartamento[altura][largura]){
        return false;
    }

    if(apartamento[altura][largura] and visitados[altura][largura]){
        return false;
    }

    if(apartamento[altura][largura]){
        return true;
    }

    return false;
    
}

void dfsRec(int i, int j, vector<vector<bool>> &apartamento, vector<vector<bool>> &visitados, int altura, int largura){
    visitados[i][j] = true;

    if(dfsValido(i - 1, j, altura, largura, apartamento, visitados)){
        dfsRec(i - 1, j, apartamento, visitados, altura, largura);
    }
    if(dfsValido(i + 1, j, altura, largura, apartamento, visitados)){
        dfsRec(i + 1, j, apartamento, visitados, altura, largura);
    }
    if(dfsValido(i, j - 1, altura, largura, apartamento, visitados)){
        dfsRec(i, j - 1, apartamento, visitados, altura, largura);
    }
    if(dfsValido(i, j + 1, altura, largura, apartamento, visitados)){
        dfsRec(i, j + 1, apartamento, visitados, altura, largura);
    }

}

int dfs(vector<vector<bool>> &apartamento, int altura, int largura){
    int resposta = 0;
    vector<vector<bool>> visitados(altura, vector<bool>(largura, false));

    for(int i = 0; i < altura; i++){
        for(int j = 0; j < largura; j++){
            
            if(!apartamento[i][j] or visitados[i][j]){
                continue;
            }
            if(dfsValido(i, j, altura, largura, apartamento, visitados)){
                dfsRec(i, j, apartamento, visitados, altura, largura);
                resposta ++;
            }

        }
    }
    return resposta;
}

int main(){
    int altura; int largura;
    cin >> altura >> largura;

    vector<vector<bool>> apartamento(altura, vector<bool>(largura, false));

    for(int i = 0; i < altura; i++){
        string linha;
        cin >> linha;
        for(int j = 0; j < largura; j++){
            if(linha[j] == '.'){
                apartamento[i][j] = true;
            }
        }
    }
    cout << dfs(apartamento, altura, largura) << endl;
    
    return 0;
}
