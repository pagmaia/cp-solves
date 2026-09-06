#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll tamanho;
    cin >> tamanho;

    ll ini = 1;
    ll fim = tamanho * tamanho;
    ll posicaomed = fim / 2;
    ll resposta = 0;

    while(ini <= fim){
        ll mid = ini  + (fim - ini) / 2;
        ll counter = 0;

        for(int i = 1; i <= tamanho; ++i){
            counter += min((mid - 1) / i, tamanho);
        }

        if(counter <= posicaomed){
            resposta = mid;
            ini = mid + 1;
        }
        else{
            fim = mid - 1;
        }

    }
    cout << resposta << endl;
    
    return 0;
}