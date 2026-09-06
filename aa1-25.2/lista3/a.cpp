#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll nmaquinas; ll produtos;
    cin >> nmaquinas >> produtos;
    vector<ll> maquinas(nmaquinas);
    for(int i = 0; i < nmaquinas; ++i){
        cin >> maquinas[i];
    }

    ll ini = 0;
    ll fim = 1e18;
    ll resposta = 0;
    while(ini <= fim){
        ll mid = ini + (fim - ini) / 2;
        ll producao = 0;
        for(ll maquina : maquinas){
            producao += mid / maquina;

            if(producao >= produtos){
                break;
        }
    }
        if(producao < produtos){
            ini = mid + 1;
        }
        else{
            fim = mid - 1;
            resposta = mid;
        }
    }

    cout << resposta << endl;
    return 0;
}
