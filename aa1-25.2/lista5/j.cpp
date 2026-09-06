#include <bits/stdc++.h>

#define ll long long

using namespace std;


void solve(){
    ll tamanho = 1e7 + 1;
    ll numero;
    cin >> numero;
    vector<bool> crivo(tamanho);
    for(int i = 2; i * i <= tamanho; i++){
        if(!crivo[i]){
            for(int j = i * i; j < tamanho; j += i){
                crivo[j] = true;
            }
        }
    }
    
    int linha = 2;
    int coluna = 1;
    int limite = 2;
    map<ll, pair<int, int>> elementos;
    elementos[2] = {1, 1};
    for(int i = 3; i <= numero; i += 2){
        if(!crivo[i]){
            elementos[i] = {linha, coluna};
            if(coluna == limite){
                coluna = 1;
                linha ++;
                limite ++;
            }
            else{
                coluna ++;
            }
        }

    }
    if(crivo[numero]){
        cout << -1;
    }
    else{
        cout << elementos[numero].first << " " << elementos[numero].second;
    }

}

int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }

    
    return 0;
}