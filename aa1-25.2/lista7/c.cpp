#include "bits/stdc++.h"

#define ll long long

using namespace std;

bool monstro = true;
const int MAX = 1001;

vector<vector<bool>> mapa(MAX, vector<bool>(MAX, false));
vector<vector<bool>> visitados(MAX, vector<bool>(MAX, false));
vector<vector<bool>> visitados2(MAX, vector<bool>(MAX, false));
vector<vector<pair<int, int>>> anterior(MAX, vector<pair<int,int>>(MAX));
vector<vector<pair<int, int>>> distancias(MAX, vector<pair<int,int>>(MAX, {-1, -1}));
pair<int, int> pontofinal{-1, -1};

bool checkBorda(int i, int j, int linhas, int colunas){
    if(i == 0 or i == linhas - 1 or j == 0 or j == colunas - 1){
        return true;
    }
    return false;

}

bool checkDistancia(int i, int j){
    if(distancias[i][j].first > distancias[i][j].second or (distancias[i][j].first == -1 and distancias[i][j].second > 0)){
        return true;
    }
    return false;
}

bool bfsValido(int i, int j, int linhas, int colunas, vector<vector<bool>> &vis){
    if(i >= 0 and i < linhas and j >= 0 and j < colunas){
        if(!vis[i][j]){
            if(mapa[i][j]){
                return true;
            }
        }
    }
    return false;
}

void bfs(queue<pair<int,int>> &q, int linhas, int colunas){
    
    if(monstro){
        while(!q.empty()){
            pair<int, int> ponta = q.front();
            q.pop();
            
            if(bfsValido(ponta.first - 1, ponta.second, linhas, colunas, visitados)){
                visitados[ponta.first - 1][ponta.second] = true;
                distancias[ponta.first - 1][ponta.second].first = distancias[ponta.first][ponta.second].first + 1;
                q.push(make_pair(ponta.first - 1, ponta.second));
            }
            if(bfsValido(ponta.first, ponta.second - 1, linhas, colunas, visitados)){
                visitados[ponta.first][ponta.second - 1] = true;
                distancias[ponta.first][ponta.second - 1].first = distancias[ponta.first][ponta.second].first + 1;
                q.push(make_pair(ponta.first, ponta.second - 1));
            }
            if(bfsValido(ponta.first + 1, ponta.second, linhas, colunas, visitados)){
                visitados[ponta.first + 1][ponta.second] = true;
                distancias[ponta.first + 1][ponta.second].first = distancias[ponta.first][ponta.second].first + 1;
                q.push(make_pair(ponta.first + 1, ponta.second));
            }
            if(bfsValido(ponta.first, ponta.second + 1, linhas, colunas, visitados)){
                visitados[ponta.first][ponta.second + 1] = true;
                distancias[ponta.first][ponta.second + 1].first = distancias[ponta.first][ponta.second].first + 1;
                q.push(make_pair(ponta.first, ponta.second + 1));
            }
        }
    }
    else{
        if(checkBorda(q.front().first, q.front().second, linhas, colunas)){
            pontofinal = make_pair(q.front().first, q.front().second);
            return;
        }
        while(!q.empty()){
            pair<int, int> ponta = q.front();
            q.pop();

            if(bfsValido(ponta.first - 1, ponta.second, linhas, colunas, visitados2)){
                visitados2[ponta.first - 1][ponta.second] = true;
                distancias[ponta.first - 1][ponta.second].second = distancias[ponta.first][ponta.second].second + 1;
                anterior[ponta.first - 1][ponta.second] = ponta;
                q.push(make_pair(ponta.first - 1, ponta.second));
                if(checkBorda(ponta.first - 1, ponta.second, linhas, colunas) and checkDistancia(ponta.first - 1, ponta.second)){
                    pontofinal = make_pair(ponta.first - 1, ponta.second);
                    return;
                }
                
            }
            if(bfsValido(ponta.first, ponta.second - 1, linhas, colunas, visitados2)){
                visitados2[ponta.first][ponta.second - 1] = true;
                distancias[ponta.first][ponta.second - 1].second = distancias[ponta.first][ponta.second].second + 1;
                anterior[ponta.first][ponta.second - 1] = ponta;
                q.push(make_pair(ponta.first, ponta.second - 1));
                if(checkBorda(ponta.first, ponta.second - 1, linhas, colunas) and checkDistancia(ponta.first, ponta.second - 1)){
                    pontofinal = make_pair(ponta.first, ponta.second - 1);
                    return;
                }
            }
            if(bfsValido(ponta.first + 1, ponta.second, linhas, colunas, visitados2)){
                visitados2[ponta.first + 1][ponta.second] = true;
                distancias[ponta.first + 1][ponta.second].second = distancias[ponta.first][ponta.second].second + 1;
                anterior[ponta.first + 1][ponta.second] = ponta;
                q.push(make_pair(ponta.first + 1, ponta.second));
                if(checkBorda(ponta.first + 1, ponta.second, linhas, colunas) and checkDistancia(ponta.first + 1, ponta.second)){
                    pontofinal = make_pair(ponta.first + 1, ponta.second);
                    return;
                }

            }

            if(bfsValido(ponta.first, ponta.second + 1, linhas, colunas, visitados2)){
                visitados2[ponta.first][ponta.second + 1] = true;
                distancias[ponta.first][ponta.second + 1].second = distancias[ponta.first][ponta.second].second + 1;
                anterior[ponta.first][ponta.second + 1] = ponta;
                q.push(make_pair(ponta.first, ponta.second + 1));
                if(checkBorda(ponta.first, ponta.second + 1, linhas, colunas) and checkDistancia(ponta.first, ponta.second + 1)){
                    pontofinal = make_pair(ponta.first, ponta.second + 1);
                    return;
                }
            }
        }
    }
    
}

void acharCaminho(vector<char> &caminho, int i, int j){
    while(anterior[i][j].first != -2 and anterior[i][j].second != -2){
        if(anterior[i][j].first == i - 1 and anterior[i][j].second == j){
            i --;
            caminho.push_back('D');
        }
        else if(anterior[i][j].first == i + 1 and anterior[i][j].second == j){
            i ++;
            caminho.push_back('U');
        }
        else if(anterior[i][j].first == i and anterior[i][j].second == j - 1){
            j --;
            caminho.push_back('R');
        }
        else if(anterior[i][j].first == i and anterior[i][j].second == j + 1){
            j ++;
            caminho.push_back('L');
        }
    }
    reverse(caminho.begin(), caminho.end());
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<string> labirinto(n);
    for(int i = 0; i < n; i++){
        string linha;
        cin >> linha;
        labirinto[i] = linha;
    }

    pair<int, int> origem;
    queue<pair<int, int>> monstros;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(labirinto[i][j] == '.'){
                mapa[i][j] = true;
            }
            else if(labirinto[i][j] == 'A'){
                origem.first = i;
                origem.second = j;
                mapa[i][j] = true;
                distancias[i][j].second = 0;
            }
            else if(labirinto[i][j] == 'M'){
                mapa[i][j] = true;
                monstros.push(make_pair(i, j));
                visitados[i][j] = true;
                distancias[i][j].first = 0;
            }
        }
    }
    
    anterior[origem.first][origem.second] = {-2, -2};
    bfs(monstros, n, m);
    
    monstro = false;
    
    queue<pair<int, int>> start;
    visitados2[origem.first][origem.second] = true;
    start.push(origem);
    
    bfs(start, n, m);

    if(pontofinal.first == -1 and pontofinal.second == -1){
        cout << "NO" << endl;
        return 0;
    }
    
    vector<char> caminho;
    acharCaminho(caminho, pontofinal.first, pontofinal.second);

    cout << "YES" << endl;
    cout << caminho.size() << endl;
    for(char c : caminho){
        cout << c;
    }

    return 0;
}