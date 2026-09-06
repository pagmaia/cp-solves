#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll tamanho; ll alvo;
    cin >> tamanho >> alvo;
    ll valores[tamanho];
    for(int i = 0; i < tamanho; ++i){
        cin >> valores[i];
    }

    map<ll, ll> complemento;
    bool resposta = false;

    for(int i = 0; i < tamanho; ++i){
        if(complemento.count(alvo - valores[i])){
            cout << i + 1 << " " << complemento[alvo - valores[i]] << endl;
            return 0;
        }
        complemento[valores[i]] = i + 1;
    }

    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}