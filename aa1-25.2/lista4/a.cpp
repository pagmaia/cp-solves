#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll clientes;
    cin >> clientes;
    vector<ll> entradasaida(clientes * 2);
    map<ll, ll> tempos;
    
    for(int i = 0; i < clientes * 2; i += 2){
        ll entrada; ll saida;
        cin >> entrada >> saida;
        entradasaida[i] = entrada;
        entradasaida[i + 1] = saida;
        tempos[entrada] = 1;
        tempos[saida] = -1;
    }

    sort(entradasaida.begin(), entradasaida.end());

    ll atual = 0;
    ll maximo = 0;

    for(int tempo : entradasaida){
        atual += tempos[tempo];
        maximo = max(maximo, atual);
    }
    
    cout << maximo << endl;

    return 0;
}