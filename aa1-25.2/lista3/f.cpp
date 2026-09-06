#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int elementos; int operacoes;
    cin >> elementos >> operacoes;
    vector<ll> array(elementos);

    for(int i = 0; i < elementos; ++i){
        cin >> array[i];;
    }

    sort(array.begin(), array.end());
    ll ini = 0;
    ll fim = 2e9;
    ll resposta = 0;

    while(ini <= fim){
        ll mid = ini + (fim - ini) / 2;
        ll gastooperacoes = operacoes;


        for(int i = elementos / 2; i < elementos; ++i){
            if(array[i] < mid){
                gastooperacoes -= mid - array[i];
            }
        }

        if(gastooperacoes < 0){
            fim = mid - 1;
        }
        else{
            resposta = mid;
            ini = mid + 1;
        }
    }

    cout << resposta << endl;

    return 0;
}