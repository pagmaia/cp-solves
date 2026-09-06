#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll tamanho; ll divisoes;
    ll soma = 0;
    cin >> tamanho >> divisoes;
    vector<ll> array(tamanho);
    for(int i = 0; i < tamanho; ++i){
        cin >> array[i];
        soma += array[i];
    }
    ll ini = *max_element(array.begin(), array.end());
    ll fim = soma;
    ll resposta = 0;
    while(ini <= fim){
        ll mid = ini + (fim - ini) / 2;
        ll qdivisoes = 1;
        ll somaatual = 0;
        
        for(int i = 0; i < tamanho; ++i){
            somaatual += array[i];
            if(somaatual > mid){
                somaatual = array[i];
                qdivisoes ++;
            }
        }

        if(qdivisoes <= divisoes){
            resposta = mid;
            fim = mid - 1;
        }
        else{
            ini = mid + 1;
        }

    }
    cout << resposta << endl;

    return 0;
}

