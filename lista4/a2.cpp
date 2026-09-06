#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int clientes;
    cin >> clientes;
    vector<pair<ll,ll>> entradasaida(clientes);
    for(int i = 0; i < clientes; ++i){
        cin >> entradasaida[i].first >> entradasaida[i].second;
    }
    sort(entradasaida.begin(), entradasaida.end());
    
    ll atual = 1;
    ll maximo = 0;
    int indice = 0;

    for(int i = 1 ; i < clientes; ++i){
        pair<ll, ll> referencia = entradasaida[indice];
        if(entradasaida[i].first <= referencia.second){
            atual ++;
        }
        else{
            indice ++;
            if(entradasaida[indice + 1].second > entradasaida[i].first){
                atual = 2;
            }
            else{
                atual = 1;
            }
        }

        maximo = max(maximo, atual);
    }

    cout << maximo << endl;
    
    return 0;
}